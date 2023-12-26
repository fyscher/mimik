#include "string.h"
#include <stddef.h>

char *
strpbrk (const char *s1, const char *s2)
{
    while (*s1)
    {
        for (size_t i = 0; s2[i]; i++)
        {
            if (*s1 == s2[i])
            {
                return (char*)s1;
            }
        }
        s1++;
    }

    return (char*)NULL;
}
