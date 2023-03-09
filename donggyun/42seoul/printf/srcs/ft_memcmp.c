#include "libft.h"

int	ft_memcmp(const void *buf1, const void *buf2, size_t count)
{
	const unsigned char	*s1;
	const unsigned char	*s2;

	s1 = (const unsigned char *)buf1;
	s2 = (const unsigned char *)buf2;
	while (count--)
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		s1++;
		s2++;
	}
	return (0);
}