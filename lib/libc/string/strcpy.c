#include "string.h"
#include <stddef.h>

char *
strcpy (char *restrict dst, const char *restrict src)
{
    stpcpy(dst, src);
    return dst;
}

char *
stpcpy (char *restrict dst, const char *restrict src)
{
    while (*src)
    {
        *dst = *src;

        src++;
        dst++;
    }
    *dst = (char)0;
    return dst;
}
