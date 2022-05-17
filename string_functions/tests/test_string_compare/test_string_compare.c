#include "string_functions.h"
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
    int res;

    if(argc != 3) {
        fprintf(stderr, "Usage: %s string1 string2\n", *argv);
        exit(1);
    }

    res = string_compare(argv[1], argv[2]);
    if(res)
        printf("%s\n", res > 0 ? "more" : "less");
    else
        printf("equal\n");

    return 0;
}
