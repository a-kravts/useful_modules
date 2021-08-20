#include "filling_out_src.h"
#include <stdio.h>

void filling_out_src(char *file_name, FILE *file_ptr)
{
	fprintf(file_ptr, "#include \"%s.h\"\n\n", file_name);
	fprintf(file_ptr, "void %s()\n", file_name);
	fprintf(file_ptr, "{\n\n");
	fprintf(file_ptr, "}");
}
