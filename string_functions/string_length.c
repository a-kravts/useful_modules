#include "string_functions.h"

int string_length(const char *s)
{
#ifndef EFFICIENT_VARIANT
#define EFFICIENT_VARIANT
    const char *tmp;

    for(tmp = s; *tmp; tmp++)
        {}
    return tmp - s;
#else
    int n = 0;

    for(; *s; s++)
        n++;

    return n;
#endif
}
