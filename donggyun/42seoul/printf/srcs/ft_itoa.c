#include "libft.h"

int	nb_len(long long nb)
{
	int length;
	
	length = 0;
	while (nb > 0)
	{
		nb /= 10;
		length++;
	}
	return (length);
}

void	write_int(long long nb, char *arr, int *lev)
{
	if (nb > 9)
		write_int(nb / 10, arr, lev);
	arr[*lev] = (nb % 10 + '0');
	*lev += 1;
}

char	*ft_itoa(int n)
{
	long long	nb;
	int			lev;
	char		*arr;

	nb = (long long)n;
	lev = 0;
	if (nb < 0)
	{
		nb *= -1;
		lev = 1;
		if (!(arr = (char *)malloc(nb_len(nb) + 2))) return (NULL);
		arr[0] = '-';
	}
	else
		if (!(arr = (char *)malloc(nb_len(nb) + 1))) return (NULL);
	write_int(nb, arr, &lev);
	arr[lev] = '\0';
	return (arr);
}