#include "libft.h"

char	*ft_strrchr(const char *string, int c)
{
	const char *s;

	s = string;
	while (*string)
		string++;
	while (--string != s && *string != (char)c)
		;
	if (*string == (char)c)
		return ((char *)string);
	return (NULL);
}