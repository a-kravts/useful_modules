#include "string_functions.h"

int string_n_compare(const char *s1, const char *s2, int n)
{
#ifndef COMPARISON_WITH_A_LOOP
#define COMPARISON_WITH_A_LOOP
    int res = 0;

    for(; n; n--) {
        res = *s1 - *s2;
        if(!(*s1 && *s2) || *s1 != *s2) /* if one string or both ended */
            break;                      /* or characters are not equal */
        s1++;
        s2++;
    }

    return res;
#else
    if(!n || (!(*s1 && *s2) || *s1 != *s2))
        return *s1 - *s2;
    else
        return string_n_compare(s1 + 1, s2 + 1, n - 1);
#endif
}
