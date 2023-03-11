/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junsepar <junsepar@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 20:08:56 by junsepar          #+#    #+#             */
/*   Updated: 2023/02/15 21:50:08 by junsepar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

char	*ft_strnstr(const char *string1, const char *string2, size_t n)
{
	int	i;
	int	j;

	if (!*string2)
		return ((char *)string1);
	j = 0;
	while (i < n && string1[j])
	{
		if (string1[j] == *string2)
		{
			i = 0;
			while (string2[i] == string1[j + i])
			{
				if (i + j > n)
					return (NULL);
				i++;
			}
			if (*(string2 + i) == '\0')
					return ((char *)(string1 + j));
		}
		j++;
	}
	return (NULL);
}