#include "string_functions.h"
#include <stdlib.h>
#include <stdio.h>

int main(int argc, char **argv)
{
    char *str;
    int size;

    if(argc != 3) {
        fprintf(stderr, "Usage: %s string size\n", *argv);
        exit(1);
    }

    size = atoi(argv[2]);
    str = malloc(size);
    string_n_copy(str, argv[1], size);
    printf("%s\n", str);

    free(str);

    return 0;
}
