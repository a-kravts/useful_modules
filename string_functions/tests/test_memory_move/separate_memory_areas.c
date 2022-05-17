#include "definitions.h"

MAKE_PRINT_ARRAY_FUNCTION("%d", int)
MAKE_PRINT_ARRAY_FUNCTION("%.1lf", double)

int main(int argc, char **argv)
{
    test_objects obj;
    u_arrays src, dest;

    if(argc != 2 + NUMBER_OF_ELEMENTS) {
        fprintf(stderr, "Usage: %s test_objects_code "
                        "element ...\n", *argv);
        exit(1);
    }

    obj = atoi(argv[1]);
    switch(obj) {
    case to_chr:
        fill_chr_array(src.c, &argv[2], NUMBER_OF_ELEMENTS);
        src.c[NUMBER_OF_ELEMENTS] = '\0';
        memory_move(dest.c, src.c, sizeof(char) * NUMBER_OF_ELEMENTS + 1);
        printf("%s\n", dest.c);
        break;
    case to_int:
        fill_int_array(src.i, &argv[2], NUMBER_OF_ELEMENTS);
        memory_move(dest.i, src.i, sizeof(int) * NUMBER_OF_ELEMENTS);
        print_int_array(dest.i, NUMBER_OF_ELEMENTS);
        break;
    case to_dbl:
        fill_dbl_array(src.d, &argv[2], NUMBER_OF_ELEMENTS);
        memory_move(dest.d, src.d, sizeof(double) * NUMBER_OF_ELEMENTS);
        print_double_array(dest.d, NUMBER_OF_ELEMENTS);
        break;
    }

    return 0;
}
