/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junsepar <junsepar@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 20:08:06 by junsepar          #+#    #+#             */
/*   Updated: 2023/02/15 20:08:06 by junsepar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void* ft_memset(void* ptr, int value, size_t num)
{
	size_t			i;
	unsigned char	*temp;

	temp = (unsigned char *)ptr;
	i = 0;
	while (i < num)
		temp[i++] = (unsigned char)value;
	return (ptr);
}
/*
memset 함수는 내부 구현에 따라 void *인자를 unsigned char *로 캐스팅하여 
1바이트씩 메모리 주소에 접근하는 행위를 할 수 있습니다. 하지만, 
int 형태의 변수를 unsigned char *로 캐스팅하여 1바이트씩 접근하는 행위는 
보통의 경우에는 올바르지 않은 행위라고 말할 수 있습니다. 결과적으로 
memset 함수는 안정적으로 구현되어있고, 권장되는 사용법임에도 불구하고 
int 형태의 변수를 unsigned char *로 캐스팅하여 1바이트씩 접근하는 행위는 
예상치 못한 결과를 초래할 수 있으므로 주의해야 합니다.
*/
