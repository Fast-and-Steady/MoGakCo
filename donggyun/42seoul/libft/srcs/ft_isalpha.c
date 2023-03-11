/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junsepar <junsepar@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 20:07:23 by junsepar          #+#    #+#             */
/*   Updated: 2023/02/15 20:21:38 by junsepar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_isalpha(int c)
{
	if ((char)c >= 'A' && (char)c <= 'Z')
		return (1);
	else if ((char)c >= 'a' && (char)c <= 'z')
		return (2);
	else
		return (0);
}
