#include "string_functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char **argv)
{
    char *p, *c;

    if(argc != 3) {
        fprintf(stderr, "Usage: %s string substring\n", *argv);
        exit(1);
    }

    p = string_string(argv[1], argv[2]);
    c = strstr(argv[1], argv[2]);
    if(p != c) {
        printf("Fault\n");
        exit(2);
    } else if(p) {
        printf("Found\n");
    } else {
        printf("Null\n");
    }

    return 0;
}
