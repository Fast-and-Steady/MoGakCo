#include "libft.h"

void	*ft_memmove(void* dest, const void* source, size_t num)
{
	char		*temp;
	const char	*src;

	temp = (char *)dest;
	src = (const char *)source;
	if (temp == src)
		return (dest);
	if (dest < source)
	{
		while (num--)
			*temp++ = *src++;
	}
	else
	{
		temp += num;
		src += num;
		while (num--)
			*--temp = *--src;
	}
	return (dest);
}

/*
함수 설명.
 src가 가리키는 메모리로 부터 num 바이트 사이즈 만큼 dest가 가리키는 메모리에 옮깁니다.
  move 라서 잘라내고 붙여넣는다고 생각하실수 있지만, 이것도 복사하는 기능을 가진 함수 입니다.
그러면 복사 만 하는거면 memcpy와 같다고 생각하실 수 있겠지만, 
memcpy는 바로 그냥 어디 거치지 않고 그 위치에 복사해서 붙여넣는다고 생각하시면 되고,
memmove는 그것보다는 안전하게, 복사할것을 버퍼에 복사하고 해당 위치에 가서 버퍼에 복사된 것을 붙여 넣는 식으로 동작이 구현되어있습니다.
성능을 "굳이" 따지자면 memcpy가 버퍼를 거치지 않고 복사하기 때문에 좀더 좋긴 하겠지만, 버퍼를 이용하는 memmove가 더 안정성이 좋습니다.

자, 정리해보겠습니다.
memmove 함수도 메모리를 src에서 dest로 num 바이트 길이만큼 복사하는 함수이다.
하지만, 중간에 버퍼를 이용해서 복사를 하므로 안정성이 memcpy 보다는 뛰어나다.
memmove의 생김새는 아래와 같다.
*/