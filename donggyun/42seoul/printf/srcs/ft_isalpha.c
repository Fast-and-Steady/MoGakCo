#include "libft.h"

int ft_isalpha(int c)
{
	if ((char)c >= 'A' && (char)c <= 'Z')
		return (1);
	else if ((char)c >= 'a' && (char)c <= 'z')
		return (2);
	else
		return (0);
}