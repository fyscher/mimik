#include <stdio.h>
#include <nl_types.h>
#include <errno.h>
#include <signal.h>
#include "conf.h"

#define FLAG_ERROR   0b01
#define FLAG_PARSING 0b10

nl_catd catd;
const char *self = DEFAULT_SELF;

int 
main (const int argc, const char **argv)
{
    if (argc > 0)
    {
        self = argv[0];
    }

    setbuf(stdout, (char*)NULL);

    FILE  *file[MAX_FILES];
    size_t files = 0;

    unsigned char flags = FLAG_PARSING;

    catd = catopen("tee", 0);
    if (catd < 0)
    {
        fprintf(stderr, CAT_ERROR, self, errno);
    }

    size_t buffSize = BUFF_SIZE;

    const char *mode = "w";

    int j;
    for (int i = 1; i<argc; i++)
    {
        if (
            (flags & FLAG_PARSING) &&
            (argv[i][0] == '-') && 
            argv[i][1]
        ) // option
        {
            // parse options
            for (j = 1; argv[i][j]; j++)
            {
                switch (argv[i][j])
                {
                    case 'a': // -a : append to files
                        mode = "a";
                        break;
                    case 'i': // -i : ignore sigint
                        signal(SIGINT, SIG_IGN);
                        break;
                    case 'u': // -u : disable buffed i/o
                        buffSize = 1;
                        break;
                    case '-': // -- : stop parsing
                        flags &= ~FLAG_PARSING;
                        break;
                    default:
                        fprintf(stderr, catgets(catd, 1, 1, UNKNOWN_OPTION), self, argv[i][j]);
                        flags |= FLAG_ERROR;
                        break;
                }
            }
            continue; // skip file parsing
        }

        // file opening
        file[files] = fopen(argv[i], mode);

        // check if it opened
        if (!file[files])
        {
            fprintf(stderr, catgets(catd, 1, 2, CANNOT_OPEN), self, errno, argv[i]);
            flags |= FLAG_ERROR;
            continue;
        }

        // remove buffer from files 
        setbuf(file[files], (char*)NULL);

        // next file
        files++;
    }

    // copy stdin to outputs
    unsigned char buff[BUFF_SIZE];
    size_t read;
    do
    {
        // fill buffer with file
        read = fread(buff, sizeof(unsigned char), buffSize, stdin);

        // fill outputs with buffer
        fwrite(buff, sizeof(unsigned char), read, stdout);

        for (size_t i = 0; i<files; i++)
        {
            // write to file
            fwrite(buff, sizeof(unsigned char), read, file[i]);
        }
    } while (read >= buffSize); // read should never be greater, but it's better to catch all possibilities

    // close files
    for (; files; files--)
    {
        fclose(file[files-1]);
    }
    
    if (catd >= 0)
    {
        catclose(catd);
    }

    return flags & FLAG_ERROR;
}
