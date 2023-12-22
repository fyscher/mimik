#include "string.h"
#include <stddef.h>

char *
strcpy (char *restrict dst, const char *restrict src)
{
    char *dstcpy = dst;
    while (*src)
    {
        *dst = *src;

        src++;
        dst++;
    }
    *dst = (char)0;
    return dstcpy;
}
