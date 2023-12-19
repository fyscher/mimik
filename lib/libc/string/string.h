#ifndef __LIBC_STRING_H__
#define __LIBC_STRING_H__
#include <stddef.h>

// string/strcmp.c
int 
strcmp (const char *restrict s1, const char *restrict s2);

// string/strncmp.c
int
strncmp (const char *restrict s1, const char *restrict s2, size_t n);

#endif
