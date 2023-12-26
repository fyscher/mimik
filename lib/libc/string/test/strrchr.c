#include <stdio.h>
#include "../string.h"

int
main (void)
{
    int err = 0;
    char *buff = "StringString";
    char *x = strrchr(buff, 'S');
    if (!x)
    {
        puts("libc/strrchr 11: Does not find first character match");
        err = 1;
    }
    else if (x != buff+6)
    {
        puts("libc/strrchr 16: Mismatches on first character match");
        err = 1;
    }

    x = strrchr(buff, (char)0);
    if (!x)
    {
        puts("libc/strrchr 23: Does not find last character match");
        err = 1;
    }
    else if (x != buff+12)
    {
        puts("libc/strrchr 28: Mismatches on last character match");
        err = 1;
    }

    x = strrchr(buff, 'r');
    if (!x)
    {
        puts("libc/strrchr 35: Does not find character");
        err = 1;
    }
    else if (x != buff+8)
    {
        puts("libc/strrchr 40: Mismatches");
        err = 1;
    }

    x = strrchr(buff, '=');
    if (x)
    {
        puts("libc/strrchr 47: Matches on nothing");
        err = 1;
    }

    if (err)
    {
        puts("libc/strrchr:\tInconsistent!");
    }
    else
    {
        puts("libc/strrchr:\tConsistent");
    }
    return err;
}
