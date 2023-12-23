#include "string.h"
#include <stddef.h>

char *
strncpy (char *restrict dst, const char *restrict src, size_t n)
{
    char *dstcpy = dst;
    while (*src && n)
    {
        *dst = *src;

        src++;
        dst++;
        n--;
    }

    while (n)
    {
        *dst = (char)0;
        dst++;
        n--;
    }

    return dstcpy;
}
