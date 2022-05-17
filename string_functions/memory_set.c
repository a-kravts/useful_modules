#include "string_functions.h"

void memory_set(void *m, int val, int size)
{
    unsigned char *p = m;
    val = (unsigned char)val;

    for(; size; size--, p++)
        *p = val;
}
