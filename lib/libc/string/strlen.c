#include "string.h"

size_t
strlen (const char *s)
{
    size_t sz = 0;

    while (*s)
    {
        s++;
        sz++;
    }

    return sz;
}
