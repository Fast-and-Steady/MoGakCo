#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*arr;
	int		i;

	if (!s)
		return (NULL);
	if (!(arr = (char *)malloc(ft_strlen((char *)s) + 1))) return (NULL);
	i = 0;
	while (s[i])
	{
		arr[i] = f(i, s[i]);
		i++;
	}
	arr[i] = '\0';
	return (arr);
}

/*
** char my_func(unsigned int i, char str)
** {
** 	printf("My inner function: index = %d and %c\n", i, str);
** 	return str - 32;
** }
**
** int main()
** {
** 	char str[10] = "hello.";
** 	printf("The result is %s\n", str);
** 	char *result = ft_strmapi(str, my_func);
** 	printf("The result is %s\n", result);
** 	return 0;
** }
*/