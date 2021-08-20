#include "filling_out_header.h"
#include "str_to_upper.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SUFFIX_H_SENTRY "_H_SENTRY"
#define SIZE_SUFFIX_H_SENTRY (strlen(SUFFIX_H_SENTRY))

void filling_out_header(char *file_name, FILE *file_ptr)
{
	char *file = (char *)malloc(strlen(file_name) +
		SIZE_SUFFIX_H_SENTRY + 1);

	fprintf(file_ptr, "/*Declaration(s) for %s.c module*/\n", file_name);
	strcpy(file, file_name);
	str_to_upper(file);
	strcat(file, SUFFIX_H_SENTRY);
	fprintf(file_ptr, "#ifndef %s\n", file);
	fprintf(file_ptr, "#define %s\n\n", file);
	fprintf(file_ptr, "extern void %s();\n\n", file_name);
	fprintf(file_ptr, "#endif");
	free(file);
}
