#include "get_next_line.h"

void	mem_cpy(char *src, char *src2, int a, int stop, int clean)
{
	while (*src && a--)
		*(src2++) = *(src++);
	if (stop)
		*src2++ = 0;
	if (clean)
		while(*src2)
			*src2++ = 0;
}