#include "string_functions.h"
#include <stddef.h>

char *string_right_char(const char *s, int c)
{
#ifndef IN_REVERSE_ORDER
#define IN_REVERSE_ORDER
    const char *p = s + string_length(s);
    c = (unsigned char)c;

    for(; p >= s; p--)
        if(*p == c)
            return p;

    return NULL;
#else
    const char *ret = NULL;
    c = (unsigned char)c;

    if(c == '\0')
        return s + string_length(s);
    for(; *s; s++)
        if(*s == c)
            ret = s;

    return ret;
#endif
}
