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

size_t
strnlen (const char *s, size_t n)
{
    size_t sz = 0;

    while (*s && n)
    {
        s++;
        sz++;
        n--;
    }

    return sz;
}

