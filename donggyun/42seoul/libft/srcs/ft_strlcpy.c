/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junsepar <junsepar@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 20:08:46 by junsepar          #+#    #+#             */
/*   Updated: 2023/02/15 20:08:47 by junsepar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcpy(char *dst, const char *src, size_t size)
{
    size_t src_len;
    size_t i;

    src_len = strlen(src);
    i = 0;
    if (size > 0)
    {
        while (i < size - 1 && src[i])
        {
            dst[i] = src[i];
            i++;
        }
        dst[i] = '\0';
    }
    return (src_len);
}
