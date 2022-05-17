#include "string_functions.h"
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
    char *str;
    int size;

    if(argc != 3) {
        fprintf(stderr, "Usage: %s chr1 size\n", *argv);
        exit(1);
    }

    size = atoi(argv[2]);
    str = malloc(size + 1);
    memory_set(str, *argv[1], size);
    str[size] = '\0';
    printf("%s\n", str);

    return 0;
}
