#include "libft.h"

char	*ft_strnstr(const char *string1, const char *string2, size_t n)
{
	int	i;
	const char *s;

	i = 0;
	while (n-- && *string1)
	{
		if (*string1 == *string2)
		{
			s = string1;
			while (*string1 && *(string2 + i) && *(string2 + i) == *string1)
			{
				i++;
				string1++;
			}
			if (*(string2 + i) == '\0')
				return ((char *)s);
		}
		string1++;
	}
	return (NULL);
}