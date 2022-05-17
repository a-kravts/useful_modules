#include "string_functions.h"
#include <stdlib.h>
#include <stdio.h>

int main(int argc, char **argv)
{
    int n;

    if(argc < 2) {
        fprintf(stderr, "Usage: %s string\n", *argv);
        exit(1);
    }

    n = string_length(argv[1]);
    printf("%d\n", n);

    return 0;
}
