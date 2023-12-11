#include <stdio.h>
#include <unistd.h>
#include <errno.h>
#include <string.h>
#include <nl_types.h>
#include "conf.h"

int
main (const int argc, const char **argv)
{
    const char *self = DEFAULT_SELF;
    if (argc > 0)
    {
        self = argv[0];
    }

    nl_catd catd = catopen("unlink", 0);
    if (catd < 0)
    {
        fprintf(stderr, CATD_FAILED, self, errno, strerror(errno));
    }

    unsigned int err = 0;
    for (int i = 1; i<argc; i++)
    {
        if (unlink(argv[i]) < 0)
        {
            fprintf(stderr, catgets(catd, 1, 1, FAILED), self, argv[i], errno, strerror(errno));
            err = 1;
        }
    }

    if (catd >= 0)
    {
        catclose(catd);
    }

    return err;
}
