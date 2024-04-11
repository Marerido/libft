#include <unistd.h>

void ft_putnbr_fd(int n, int fd)
{
	char		digit;
	long int	nb;

	nb = n;
	if (nb < 0)
	{
		write(fd, "-", 1);
		nb = -nb;
	}
	if (nb > 9)
	{
		ft_putnbr_fd(nb / 10, fd);
	}
	digit = '0' + nb % 10;
	write(fd, &digit, 1);
}
