#include "string_functions.h"
#include <stddef.h>

char *string_char(const char *s, int c)
{
    c = (unsigned char)c;

    if(c == '\0')
        return s + string_length(s);
    for(; *s; s++)
        if(*s == c)
            return s;

    return NULL;
}
