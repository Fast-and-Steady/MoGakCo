/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junsepar <junsepar@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 20:08:37 by junsepar          #+#    #+#             */
/*   Updated: 2023/02/15 20:08:38 by junsepar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *string)
{
	int		len;
	int		i;
	char	*arr;

	len = ft_strlen((char *)string);
	if (!(arr = (char *)malloc(len + 1))) return (NULL);
	i = 0;
	while (string[i])
	{
		arr[i] = string[i];
		i++;
	}
	arr[i] = '\0';
	return (arr);
}
