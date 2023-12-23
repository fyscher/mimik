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

    if (strcmp("Same1", "Same0") <= 0)
    {
        puts("libc/strcmp: does not return less than zero on greater s1");
        err = 1;
    }

    if (strcmp("Same0", "Same1") >= 0)
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
