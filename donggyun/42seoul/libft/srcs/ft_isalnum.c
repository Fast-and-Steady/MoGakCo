/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junsepar <junsepar@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 20:07:21 by junsepar          #+#    #+#             */
/*   Updated: 2023/02/15 20:07:21 by junsepar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalunm(int c)
{
	if ((char)c >= '0' && (char)c <= '9')
		return (1);
	else if ((char)c >= 'A' && (char)c <= 'Z')
		return (1);
	else if ((char)c >= 'a' && (char)c <= 'z')
		return (1);
	else
		return (0);
}
