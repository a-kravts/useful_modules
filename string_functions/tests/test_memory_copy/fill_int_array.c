#include "fill_int_array.h"
#include <stdlib.h>

void fill_int_array(int *a, char **argv, int count)
{
    for(; count; count--) {
        *a = atoi(*argv);
        a++;
        argv++;
    }
}
