/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junsepar <junsepar@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 20:08:41 by junsepar          #+#    #+#             */
/*   Updated: 2023/02/15 20:08:42 by junsepar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strcat(char *dest, const char *src)
{
    int	start;
	int	i;

	start = ft_strlen(dest);
	i = 0;
	while (src[i])
	{
		dest[start + i] = src[i];
		i++;
	}
	dest[start + i] = '\0';
    return (dest);
}

char *ft_strcpy(char *dst, const char *src)
{
    int i;
    
    i = 0;
    while (src[i])
    {
        dst[i] = src[i];
        i++;
    }
    dst[i] = '\0';
    return (dst);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		len1;
	int		len2;
	char	*buf;

	len1 = ft_strlen((char *)s1);
	len2 = ft_strlen((char *)s2);
	if (!(buf = (char *)malloc(len1 + len2 + 1))) return (NULL);
	ft_strcpy(buf, s1);
	ft_strcat(buf, s2);
	return (buf);
}
