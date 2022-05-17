#include "string_functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char **argv)
{
    char *result, *control;

    if(argc != 3) {
        fprintf(stderr, "Usage: %s string char\n", *argv);
        exit(1);
    }

    control = strrchr(argv[1], *argv[2]);
    result = string_right_char(argv[1], *argv[2]);
    if(control != result) {
        printf("Fault\n");
    } else if(result) {
        printf("%c\n", *result);
    } else {
        printf("NULL\n");
    }

    return 0;
}
