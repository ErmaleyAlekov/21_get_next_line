#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>

void	mem_cpy(char *src, char *src2, int a, int stop);
int		get_next_line(int fd, char **line);
#endif
