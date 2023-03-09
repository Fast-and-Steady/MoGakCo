#include "libft.h"

char * ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*arr;
	size_t	i;

	if (!s || start > (unsigned int)ft_strlen((char *)s))
		return (NULL);
	if (!(arr = (char *)malloc(len + 1))) return (NULL);
	i = 0;
	while (i < len && s[start + i])
	{
		arr[i] = s[start + i];
		i++;
	}
	arr[i] = '\0';
	return (arr);
}
