/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junsepar <junsepar@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 17:25:33 by junsepar          #+#    #+#             */
/*   Updated: 2023/02/20 19:33:29 by junsepar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>

int	ft_strlen(char *str)
{
	int i = 0;

	if (!str)
		return (0);
	while (str[i])
		i++;
	return (i);
}

char	*ft_strjoin(const char *s1, char const *s2)
{
	int		len1;
	int		len2;
	char	*buf;

	len1 = 0;
	len2 = 0;
	if (s1 != NULL)
		len1 = ft_strlen((char *)s1);
	len2 = ft_strlen((char *)s2);
	if (!(buf = (char *)malloc(len1 + len2 + 1))) return (NULL);
	buf[0] = '\0';
	if (s1 != NULL)
		ft_strcat(buf, s1);
	ft_strcat(buf, s2);
	return (buf);
}

char	*ft_strcat(char *string1, const char *string2)
{
	int	i;

	i = 0;
	while (string1[i])
		i++;
	while (*string2)
	{
		string1[i] = *string2;
		string2++;
		i++;
	}
	string1[i] = '\0';
	return (string1);
}

char	*ft_strchr(const char *string, int c)
{
	while (*string != (char)c)
	{
		if (*string == '\0')
			return (0);
		string++;
	}
	return ((char *)string);
}
