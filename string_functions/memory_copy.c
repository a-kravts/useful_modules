#include "string_functions.h"

void memory_copy(void *dest, const void *src, int size)
{
    unsigned char *d = dest;
    const unsigned char *s = src;

    for(; size; size--) {
        *d = *s;
        d++;
        s++;
    }
}
