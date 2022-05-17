#include "fill_dbl_array.h"
#include <stdlib.h>

void fill_dbl_array(double *a, char **argv, int count)
{
    for(; count; count--) {
        *a = atof(*argv);
        a++;
        argv++;
    }
}
