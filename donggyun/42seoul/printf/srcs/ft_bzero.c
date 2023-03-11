#include "libft.h"

void	ft_bzero(void *ptr, size_t num)
{
	ft_memset(ptr, 0, num);
}
/*
비표준 이므로 사용이 권장되지 않고 memset을 사용하는걸 추천한다고 한다.
*/