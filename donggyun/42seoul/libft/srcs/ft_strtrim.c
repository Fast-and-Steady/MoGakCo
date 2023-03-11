/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junsepar <junsepar@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 20:09:03 by junsepar          #+#    #+#             */
/*   Updated: 2023/02/15 20:29:44 by junsepar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char *ft_strncpy(char *dest, const char *src, size_t n)
{
	size_t i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

char	*ft_strtrim(char const *s)
{
	int		start;
	int		end;
	int		len;
	char	*buf;

	if (!s)
		return (NULL);
	start = 0;
	end = ft_strlen((char *)s) - 1;
	while (s[start] && (s[start] == ' ' || s[start] == '\n' || s[start] == '\t'))
		start++;
	while (end > start && (s[end] == ' ' || s[end] == '\n' || s[end] == '\t'))
		end--;
	len = end - start - 1;
	if (!(buf = malloc(len + 1))) return (NULL);
	ft_strncpy(buf, s + start, len);
	buf[len] = '\0';
	return (buf);
}
