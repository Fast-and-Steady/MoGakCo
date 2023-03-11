#include "libft.h"

void ft_putnbr_fd(int n, int fd)
{
	long long nb;

	nb = (long long)n;
	if(nb < 0)
	{
		nb *= -1;
		write(fd, "-", 1);
	}
	if (nb > 9)
		ft_putnbr_fd(nb / 10, fd);
	write(fd, &"0123456789"[nb % 10], 1);
}