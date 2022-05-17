#include "string_functions.h"
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
    char *res;

    if(argc != 3) {
        fprintf(stderr, "Usage: %s string char\n", *argv);
        exit(1);
    }

    res = string_char(argv[1], *argv[2]);
    if(res)
        printf("%c\n", *res);
    else
        printf("NULL\n");

    return 0;
}
