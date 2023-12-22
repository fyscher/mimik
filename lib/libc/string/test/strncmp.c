#include <string.h>
#include <stdio.h>

int
main (void)
{
    int err = 0;
    if (strncmp("Same", "Same", 4) != 0)
    {
        printf("libc/strncmp: does not return 0 on same strings\n");
        err = 1;
    }

    if (strncmp("1More", "0Less", 5) <= 0)
    {
        printf("libc/strncmp: does not return less than zero on greater s1\n");
        err = 1;
    }

    if (strncmp("0Less", "1More", 5) >= 0)
    {
        printf("libc/strncmp: does not return more than zero on lesser s1\n");
        err = 1;
    }

    if (strncmp("Same", "SameStill", 4) != 0)
    {
        printf("libc/strncmp: reads more then specified bytes on s2\n");
        err = 1;
    }
    if (strncmp("SameStill", "Same", 4) != 0)
    {
        printf("libc/strncmp: reads more then specified bytes on s1\n");
        err = 1;
    }

    if (!err)
    {
        printf("libc/strncmp: Consistent\n");
    }
    else
    {
        printf("libc/strncmp: Inconsistent!\n");
    }
    return err;
}
