#ifndef DEFINITIONS_H_SENTRY
#define DEFINITIONS_H_SENTRY

#include "string_functions.h"
#include "fill_chr_array.h"
#include "fill_int_array.h"
#include "fill_dbl_array.h"
#include <stdio.h>
#include <stdlib.h>

#ifndef NUMBER_OF_ELEMENTS
#define NUMBER_OF_ELEMENTS 3
#endif

enum {
    arg_src_shift = 3,
    arg_dest_shift,
    arg_first_el
};

typedef enum {to_chr, to_int, to_dbl} test_objects;

typedef union {
    char c[NUMBER_OF_ELEMENTS + 1];
    int i[NUMBER_OF_ELEMENTS];
    double d[NUMBER_OF_ELEMENTS];
} u_arrays;

typedef union {
    char *c;
    int *i;
    double *d;
} u_pointers;

/*FS = format string*/
#define MAKE_PRINT_ARRAY_FUNCTION(FS, TYPE) \
    void print_ ## TYPE ## _array(const TYPE *arr, int count) \
    { \
        for(; count; count--) { \
            printf(FS"%c", *arr, (count > 1) ? ' ' : '\n'); \
            arr++; \
        } \
    }
#endif
