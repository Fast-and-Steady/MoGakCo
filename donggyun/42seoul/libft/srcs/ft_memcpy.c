/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junsepar <junsepar@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 20:08:01 by junsepar          #+#    #+#             */
/*   Updated: 2023/02/15 20:39:29 by junsepar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void* dest, const void* source, size_t num)
{
	char *temp;
	const char *src;

	if (dest == source)
		return (dest);
	temp = (char *)dest;
	src = (const char *)source;
	while (num--)
		*temp++ = *src++;
	return (dest);
}
