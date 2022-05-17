#include "string_functions.h"

void string_n_copy(char *d, const char *s, int size)
{
    for(; *s && size; s++, d++, size--)
        *d = *s;
    if(size)
        *d = 0;
}
