#include "string_functions.h"

void string_copy(char *d, const char *s)
{
    for(; *s; s++, d++)
        *d = *s;
    *d = 0;
}
