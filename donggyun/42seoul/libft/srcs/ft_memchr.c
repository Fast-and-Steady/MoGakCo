/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junsepar <junsepar@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 20:07:56 by junsepar          #+#    #+#             */
/*   Updated: 2023/02/15 20:07:57 by junsepar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *buf, int c, size_t count)
{
	size_t				i;
	unsigned const char *temp;

	i = 0;
	temp = (unsigned char *)buf;
	while (i < count)
	{
		if (temp[i] == (unsigned char)c)
			return ((void *)(temp + i));
		i++;
	}
	return (NULL);
}
