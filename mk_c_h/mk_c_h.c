#include "check_file_open.h"
#include "check_file_close.h"
#include "filling_out_src.h"
#include "filling_out_header.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SUFFIX_SRC ".c"
#define SUFFIX_HEADER ".h"

int main(int argc, char **argv)
{
	enum {max_length = 80, suffix_length = 2};
	FILE *file_ptr;
	char src[max_length];
	char header[max_length];

	if(argc < 2) {
		fprintf(stderr, "Usage: %s file_name\n", argv[0]);
		exit(EXIT_FAILURE);
	}
	if(strlen(argv[1]) >= max_length - suffix_length) {
		fprintf(stderr, "Error: filename too long\n");
		exit(EXIT_FAILURE);
	}
	/*create src file*/
	strcpy(src, argv[1]);
	strcat(src, SUFFIX_SRC);
	file_ptr = check_file_open(src, "wx");
	filling_out_src(argv[1], file_ptr);
	check_file_close(file_ptr, src);
	/*create header file*/
	strcpy(header, argv[1]);
	strcat(header, SUFFIX_HEADER);
	file_ptr = check_file_open(header, "wx");
	filling_out_header(argv[1], file_ptr);
	check_file_close(file_ptr, header);

	return 0;
}
