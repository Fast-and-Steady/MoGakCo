#include "libft.h"

void	*ft_memcpy(void* dest, const void* source, size_t num)
{
	char *temp;
	const char *src;
	
	temp = (char *)dest;
	src = (const char *)source;
	while (num--)
		*temp++ = *src++;
	return (dest);
}