/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junsepar <junsepar@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 20:08:35 by junsepar          #+#    #+#             */
/*   Updated: 2023/02/15 20:33:02 by junsepar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
