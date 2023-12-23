#include "../string.h"
#include <stdio.h>

int
main (void)
{
    int err = 0;
    
    if (strnlen("TEST", 5) != 4)
    {
        puts("libc/strnlen: Does not compute the length of a string");
        err = 1;
    }
    if (strnlen("", 2))
    {
        puts("libc/strnlen: Does not compute the length of an empty string");
        err = 1;
    }

    if (strnlen("TEST", 2) != 2)
    {
        puts("libc/strnlen: Does not stop at n");
        err = 1;
    }

    if (!err)
    {
        puts("libc/strnlen: Consistent");
    }
    else
    {
        puts("libc/strnlen: Inconsistent!");
    }
    return err;
}
