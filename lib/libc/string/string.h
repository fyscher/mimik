#ifndef __LIBC_STRING_H__
#define __LIBC_STRING_H__
#include <stddef.h>

#ifdef __cplusplus
extern "C"
{
#endif

// string/strcmp.c
int 
strcmp (const char *restrict s1, const char *restrict s2);

// string/strncmp.c
int
strncmp (const char *restrict s1, const char *restrict s2, size_t n);

// string/strcpy.c
char *
strcpy (char *restrict dst, const char *restrict src);

char *
stpcpy (char *restrict dst, const char *restrict src);

// string/strncpy.c
char *
strncpy (char *restrict dst, const char *restrict src, size_t n);

char *
stpncpy (char *restrict dst, const char *restrict src, size_t n);

// string/strlen.c
size_t
strlen (const char *s);

size_t
strnlen (const char *s, size_t n);

// string/strcat.c
char *
strcat (char *restrict s1, const char *restrict s2);

char *
strncat (char *restrict s1, const char *restrict s2, size_t n);

// string/strchr.c
char *
strchr (const char *s, int c);

char *
strrchr (const char *s, int c);

#ifdef __cplusplus
}
#endif

#endif
