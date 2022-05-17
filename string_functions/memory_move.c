#include "string_functions.h"

void memory_move(void *dest, const void *src, int size)
{
    unsigned char *d = dest;
    const unsigned char *s = src, *tmp;
    enum state {false, true} intersect = false;

    if(s < d) {
        for(tmp = s; tmp < s + size; tmp++) {
            if(tmp == d) {
                intersect = true;
                break;
            }
        }
    }
    if(intersect) {
        d = d + size - 1;
        s = s + size - 1;
        for(; size; size--) {
            *d = *s;
            d--;
            s--;
        }
    } else {
        for(; size; size--) {
            *d = *s;
            d++;
            s++;
        }
    }
}
