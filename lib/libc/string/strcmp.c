#include "string.h"

int
strcmp (const char *restrict s1, const char *restrict s2)
{
    while (*s1 == *s2)
    {
        if (!*s1)
        {
            return 0;
        }

        s1++;
        s2++;
    }
    
    return *s1 - *s2;
}
