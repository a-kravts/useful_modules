#include "string_functions.h"
#include <stdlib.h>
#include <stdio.h>

int main(int argc, char **argv)
{
    char *str;

    if(argc != 2) {
        fprintf(stderr, "Usage: %s string\n", *argv);
        exit(1);
    }

    str = malloc(string_length(argv[1]) + 1);
    string_copy(str, argv[1]);
    printf("%s\n", str);

    free(str);

    return 0;
}
