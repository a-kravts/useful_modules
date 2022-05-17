#include "string_functions.h"

int string_compare(const char *s1, const char *s2)
{
#ifndef COMPARISON_WITH_A_LOOP
#define COMPARISON_WITH_A_LOOP
    while((*s1 && *s2) && *s1 == *s2) {
        s1++;
        s2++;
    }

    return *s1 - *s2;
#else
    if(!(*s1 && *s2) || *s1 != *s2)
        return *s1 - *s2;
    else
        return string_compare(s1 + 1, s2 + 1);
#endif
}
