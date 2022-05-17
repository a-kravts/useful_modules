#include "string_functions.h"
#include <stddef.h>

char *string_string(const char *hs, const char *n)
{
    for(; *hs; hs++) {
        const char *hst = hs;
        const char *nt = n;
        while(*hst == *nt) {
            hst++;
            nt++;
            if(!*nt)
                return hs;
            if(!*hst)
                break;
        }
    }

    return NULL;
}
