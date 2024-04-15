#include "libft.h"

void ft_putendl_fd(char *s, int fd)
{
	int	length;

	length = ft_strlen(s);
	if (s != NULL)
	{
		write(fd, s, length);
		write(fd, "\n", 1);
	}
}
