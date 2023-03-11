/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junsepar <junsepar@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 20:08:59 by junsepar          #+#    #+#             */
/*   Updated: 2023/02/15 21:01:59 by junsepar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *string, int c)
{
	int	len;
	int	i;

	i = 0;
	len = ft_strlen((char *)string);
	while (len >= 0 && string[len] != (char)c)
		len--;
	if (string[len] == (char)c)
		return ((char *)string + len);
	return (NULL);
}