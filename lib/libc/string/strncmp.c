#include "string.h"
#include <stddef.h>

int
strncmp (const char *restrict s1, const char *restrict s2, size_t n)
{
    while (*s1 == *s2 && n)
    {
        if (!*s1)
        {
            return 0;
        }

        s1++;
        s2++;
        n--;
    }

    if (n)
        return *s1 - *s2;
    return 0;
}
