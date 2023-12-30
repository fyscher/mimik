# Prologue

This manual is part of the Mimik System Tree, other implementations may differ. Some compatibility with existing standards may be met but to do not expect any.


# Name

memcpy - Copy data from memory, part of libc

# Synopsis

```C
#include <string.h>

void *memcpy (void *restrict dst, const void *restrict src, size_t n);
```


# Description

`memcpy` shall copy the contents of buffer *src* to buffer *dst*. The function shall only copy *n* bytes.
The user shall be responsible for the allocation of the buffer *dst*, its size being that of *n*.


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
Copyright (c) 2001-2018 IEEE and The Open Group


# See Also
