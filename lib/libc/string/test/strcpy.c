#include <string.h>
#include <stdio.h>

int
main (void)
{
    int err = 0;
    char buff[256];
    char *x = strcpy(buff, "TEST!");
    if (strcmp(buff, "TEST!"))
    {
        printf("libc/strcpy: Does not copy to empty dst\n");
        err = 1;
    }
    if (x != buff)
    {
        printf("libc/strcpy: Does not return end of string on empty dst\n");
        err = 1;
    }

    x = strcpy(buff, "TEST2!");
    if (strcmp(buff, "TEST2!"))
    {
        printf("libc/strcpy: Does not copy to dst\n");
        err = 1;
    }
    if (x != buff)
    {
        printf("libc/strcpy: Does not return end of string\n");
        err = 1;
    }

    x = strcpy(buff, "");
    if (strcmp(buff, ""))
    {
        printf("libc/strcpy: Does not clear src on empty dst\n");
        err = 1;
    }
    if (x != buff)
    {
        printf("libc/strcpy: Does not return end of string on empty src\n");
        err = 1;
    }

    if (!err)
    {
        printf("libc/strcpy: Consistent\n");
    }
    else
    {
        printf("libc/strcpy: Inconsistent!\n");
    }
    return err;
}
