# include "get_next_line.h"

int	reads(int fd, char **line, char *buff)
{
	int		len;
	int		reads;
	char	*buff2;

	buff2 = buff;
	while (21)
	{
        if (!*buff)
		    reads = read(fd, buff, BUFFER_SIZE);
		while((*buff && *buff != '\n'))
			buff++;
        len = buff - buff2;
		if ((*buff == '\n') || reads == 0)
		{
			*line = malloc(len + 1);
			if (!(*line))
				return (-1);
			mem_cpy(buff2, *line, len, 1, 0);
			mem_cpy(++buff, buff2, BUFFER_SIZE, 1, 1);
			if (reads != 0)
				return (1);
			else
				return (0);
		}
	}
}

int	get_next_line(int fd, char **line)
{
	static char buff[BUFFER_SIZE][BUFFER_SIZE];

	if (!line || read(fd, 0, 0) == -1 || BUFFER_SIZE <= 0)
		return (-1);
	*line = 0;
	return(reads(fd, line, *buff));
}