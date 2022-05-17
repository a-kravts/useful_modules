#include "definitions.h"

MAKE_PRINT_ARRAY_FUNCTION("%d", int)
MAKE_PRINT_ARRAY_FUNCTION("%.1lf", double)


int main(int argc, char **argv)
{
    test_objects obj;
    u_arrays arr;
    u_pointers src_p, dest_p;
    int num; /*number of elements to move*/

    if(argc != arg_first_el + NUMBER_OF_ELEMENTS) {
        fprintf(stderr, "Usage: %s test_objects_code el_num_to_move "
                        "src_shift dest_shift element ...\n", *argv);
        exit(1);
    }

    obj = atoi(argv[1]);
    num = atoi(argv[2]);
    switch(obj) {
    case to_chr:
        src_p.c = arr.c + atoi(argv[arg_src_shift]);
        dest_p.c = arr.c + atoi(argv[arg_dest_shift]);
        fill_chr_array(arr.c, &argv[arg_first_el], NUMBER_OF_ELEMENTS);
        arr.c[NUMBER_OF_ELEMENTS] = '\0';
        memory_move(dest_p.c, src_p.c, sizeof(char) * num);
        printf("%s\n", arr.c);
        break;
    case to_int:
        src_p.i = arr.i + atoi(argv[arg_src_shift]);
        dest_p.i = arr.i + atoi(argv[arg_dest_shift]);
        fill_int_array(arr.i, &argv[arg_first_el], NUMBER_OF_ELEMENTS);
        memory_move(dest_p.i, src_p.i, sizeof(int) * num);
        print_int_array(arr.i, NUMBER_OF_ELEMENTS);
        break;
    case to_dbl:
        src_p.d = arr.d + atoi(argv[arg_src_shift]);
        dest_p.d = arr.d + atoi(argv[arg_dest_shift]);
        fill_dbl_array(arr.d, &argv[arg_first_el], NUMBER_OF_ELEMENTS);
        memory_move(dest_p.d, src_p.d, sizeof(double) * num);
        print_double_array(arr.d, NUMBER_OF_ELEMENTS);
        break;
    }

    return 0;
}
