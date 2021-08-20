#include "str_to_upper.h"
#include <ctype.h>

void str_to_upper(char *str)
{
	while(*str) {
		*str = toupper(*str);
		str++;
	}
}
