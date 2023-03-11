#include "libft.h"

char	**ft_putstring(char const *s, char c, char **arr)
{
	int	len;
	int	j;
	int	z;

	len = 0;
	j = 0;
	z = 0;
	while (*s)
	{
		if (*s != c)
		{
			len = 0;
			while (s[len] && s[len] != c)
				len++;
			if (!(arr[j] = (char *)malloc(len + 1))) return (NULL);
			z = 0;
			while (*s && *s != c)
				arr[j][z++] = *s++;
			arr[j][z] = '\0';
			j++;
		}
		else
			s++;
	}
	arr[j] = NULL;
	return (arr);
}

int	word_count(char const *s, char c)
{
	int	count;

	count = 0;
	while (*s)
	{
		if (*s != c)
		{
			count++;
			while (*s && *s != c)
				s++;
		}
		else
			s++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	char	**arr;
	int		count;

	count = word_count(s, c);
	if (!(arr = (char **)malloc(sizeof(char *) * (count + 1)))) return (NULL);
	arr[count] = 0;
	arr = ft_putstring(s, c, arr);
	if (!arr)
	{
		free(arr);
		return (NULL);
	}
	return (arr);
}