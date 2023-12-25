#include <stdio.h>
#include "../string.h"

int
main (void)
{
    int err = 0;
    char *x = strchr("String", 'S');
    if (!x)
    {
        puts("libc/strchr 11: Does not find first character match");
        err = 1;
    }
    else if (*x != 'S')
    {
        puts("libc/strchr 16: Mismatches on first character match");
        err = 1;
    }

    x = strchr("String", (char)0);
    if (!x)
    {
        puts("libc/strchr 23: Does not find last character match");
        err = 1;
    }
    else if (*x != (char)0)
    {
        puts("libc/strchr 28: Mismatches on last character match");
        err = 1;
    }

    x = strchr("String", 'r');
    if (!x)
    {
        puts("libc/strchr 35: Does not find character");
        err = 1;
    }
    else if (*x != 'r')
    {
        puts("libc/strchr 40: Mismatches");
        err = 1;
    }

    x = strchr("String", '=');
    if (x)
    {
        puts("libc/strchr 47: Matches on nothing");
        err = 1;
    }

    if (err)
    {
        puts("libc/strchr:\tInconsistent!");
    }
    else
    {
        puts("libc/strchr:\tConsistent");
    }
    return err;
}
