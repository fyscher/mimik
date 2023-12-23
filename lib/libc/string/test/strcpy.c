#include "../string.h"
#include <stdio.h>

int
main (void)
{
    int err = 0;
    char buff[256];
    char *x = strcpy(buff, "TEST!");
    if (strcmp(buff, "TEST!"))
    {
        puts("libc/strcpy: Does not copy to empty dst");
        err = 1;
    }
    if (x != buff)
    {
        puts("libc/strcpy: Does not return dst on empty dst");
        err = 1;
    }

    x = strcpy(buff, "TEST2!");
    if (strcmp(buff, "TEST2!"))
    {
        puts("libc/strcpy: Does not copy to dst");
        err = 1;
    }
    if (x != buff)
    {
        puts("libc/strcpy: Does not return dst\n");
        err = 1;
    }

    x = strcpy(buff, "");
    if (strcmp(buff, ""))
    {
        puts("libc/strcpy: Does not clear src on empty dst");
        err = 1;
    }
    if (x != buff)
    {
        puts("libc/strcpy: Does not return dst on empty src");
        err = 1;
    }

    if (!err)
    {
        puts("libc/strcpy: Consistent");
    }
    else
    {
        puts("libc/strcpy: Inconsistent!");
    }
    return err;
}
