#include "string_functions.h"
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
    int res, num;

    if(argc != 4) {
        fprintf(stderr, "Usage: %s string1 string2 number\n", *argv);
        exit(1);
    }

    num = atoi(argv[3]);
    res = string_n_compare(argv[1], argv[2], num);
    if(res)
        printf("%s\n", res > 0 ? "more" : "less");
    else
        printf("%s\n", "equal");

    return 0;
}
