#include "../string.h"
#include <stdio.h>

int
main (void)
{
    int err = 0;
    char buff[256];
    char *x = stpcpy(buff, "TEST!");
    if (strcmp(buff, "TEST!"))
    {
        puts("libc/stpcpy: Does not copy to empty dst");
        err = 1;
    }
    if (*x)
    {
        puts("libc/stpcpy: Does not return end of dst on empty dst");
        err = 1;
    }

    x = stpcpy(buff, "TEST2!");
    if (strcmp(buff, "TEST2!"))
    {
        puts("libc/stpcpy: Does not copy to dst");
        err = 1;
    }
    if (*x)
    {
        puts("libc/stpcpy: Does not return end of dst\n");
        err = 1;
    }

    x = stpcpy(buff, "");
    if (strcmp(buff, ""))
    {
        puts("libc/stpcpy: Does not clear src on empty dst");
        err = 1;
    }
    if (*x)
    {
        puts("libc/stpcpy: Does not return end of dst on empty src");
        err = 1;
    }

    if (!err)
    {
        puts("libc/stpcpy: Consistent");
    }
    else
    {
        puts("libc/stpcpy: Inconsistent!");
    }
    return err;
}
