#include "check_file_close.h"
#include <stdio.h>
#include <stdlib.h>

void check_file_close(FILE *file_ptr, const char *file_name)
{
	if(fclose(file_ptr)) {
		fprintf(stderr, "Error when closing file \"%s\"\n", file_name);
		exit(EXIT_FAILURE);
	}
}
