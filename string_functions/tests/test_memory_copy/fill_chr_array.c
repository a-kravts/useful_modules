#include "fill_chr_array.h"

void fill_chr_array(char *a, char **argv, int count)
{
    for(; count; count--) {
        *a = **argv;
        a++;
        argv++;
    }
}
