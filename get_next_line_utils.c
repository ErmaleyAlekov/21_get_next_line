#include "get_next_line.h"

void	mem_cpy(char *src, char *src2, int a, int stop)
{
	while (*src && a--)
		*(src2++) = *(src++);
	*src2++ = 0;
	if (stop)
		while (*src2)
			*src2++ = 0;
}
