# Prologue

This manual is part of the Mimik System Tree, other implementations may differ. Some compatibility with existing standards may be met but to do not expect any.


# Name

strcmp - Compare part of the value of two strings, part of libc


# Synopsis

```C
#include <string.h>

int strncmp (const char *restrict s1, const char *restrict s2, size_t n);
```


# Description

The string values of *s1* and *s2* shall be compared, if they are equal then zero shall be return. 
If the strings are not equal then the return value shall be non-zero and have the signage of the subtraction of the first byte of *s1* by *s2*; `s1[0] - s2[0]`.
The signage shall be positive if the first byte of *s1* is large than the first byte of *s2*, and vise versa for the negative.
`strncat` shall not compare more than *n* bytes from *s1* nor *s2*.


# Environment Variables

Environment variables shall not be consider or modified by this function.


# Errors

This function shall not set any errors.


# Extended Description

There is no extended description.


# Future Directions

There are no future directions.


# Compliance

This function shall comply with:

The Open Group Base Specifications Issue 7, 2018 edition
IEEE Std 1003.1-2017 (Revision of IEEE Std 1003.1-2008)
Copyright © 2001-2018 IEEE and The Open Group


# See Also

[strcmp](strcmp.3) - The sister function to `strncmp`, more general