#include "../string.h"
#include <stdio.h>

int
main (void)
{
    int err = 0;
    char buff[256];
    char *x = strncpy(buff, "TEST!", 6);
    if (strcmp(buff, "TEST!"))
    {
        puts("libc/strncpy: Does not copy to empty dst");
        err = 1;
    }
    if (x != buff)
    {
        puts("libc/strncpy: Does not return dst on empty dst");
        err = 1;
    }

    x = strncpy(buff, "TEST2!", 7);
    if (strcmp(buff, "TEST2!"))
    {
        puts("libc/strncpy: Does not copy to dst");
        err = 1;
    }
    if (x != buff)
    {
        puts("libc/strncpy: Does not return dst");
        err = 1;
    }

    x = strncpy(buff, "", 1);
    if (strcmp(buff, ""))
    {
        puts("libc/strncpy: Does not clear src on empty dst");
        err = 1;
    }
    if (x != buff)
    {
        puts("libc/strncpy: Does not return dst on empty src");
        err = 1;
    }

    strcpy(buff, "xxx");
    x = strncpy(buff, "yy", 1);
    if (strcmp(buff, "yxx"))
    {
        puts("libc/strncpy: Fixed sized src does not copy properly");
        err = 1;
    }
    if (x != buff) 
    {
        puts("libc/strncpy: Does not return dst on fixed sized src");
        err = 1;
    }

    if (!err)
    {
        puts("libc/strncpy: Consistent");
    }
    else
    {
        puts("libc/strncpy: Inconsistent!");
    }
    return err;
}
