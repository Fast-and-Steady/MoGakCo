#include "libft.h"

void *ft_calloc(size_t count, size_t size)
{
	void *ptr;
	size_t total_size;
	
	if (count == 0 || size == 0)
	{
		count = 1;
		size = 1;
	}
	total_size = count * size;
	if (total_size / size != count)
		return (NULL);
	ptr = malloc(total_size);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, total_size);
	return (ptr);
}