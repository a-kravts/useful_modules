#ifndef DEFINITIONS_H_SENTRY
#define DEFINITIONS_H_SENTRY

#ifndef NUMBER_OF_ELEMENTS
#define NUMBER_OF_ELEMENTS 3
#endif

typedef enum {to_chr, to_int, to_dbl} test_objects;

typedef union {
    char c[NUMBER_OF_ELEMENTS + 1];
    int i[NUMBER_OF_ELEMENTS];
    double d[NUMBER_OF_ELEMENTS];
} u_arrays;

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
