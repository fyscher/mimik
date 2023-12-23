#include "../string.h"
#include <stdio.h>

int
main (void)
{
    int err = 0;
    if (strcmp("Same", "Same") != 0)
    {
        puts("libc/strcmp: does not return 0 on same strings");
        err = 1;
    }

    if (strcmp("1More", "0Less") <= 0)
    {
        puts("libc/strcmp: does not return less than zero on greater s1");
        err = 1;
    }

    if (strcmp("0Less", "1More") >= 0)
    {
        puts("libc/strcmp: does not return more than zero on lesser s1");
        err = 1;
    }

    if (!err)
    {
        puts("libc/strcmp: Consistent");
    }
    else
    {
        puts("libc/strcmp: Inconsistent!");
    }
    return err;
}
