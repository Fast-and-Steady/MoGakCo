/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junsepar <junsepar@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 20:07:41 by junsepar          #+#    #+#             */
/*   Updated: 2023/02/15 20:31:45 by junsepar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (!lst != NULL)
	{
		if (del != NULL && lst->content != NULL)
			del(lst->content);
		free(lst);
		lst = NULL;
	} 
}
