#include <stdio.h>
int lostroom(int a);

int main()
{
	int a, count;

	scanf("%d", &a);
	count = 1;
	
	int sum = lostroom(a);
	

	while(1)
	{
		if (sum == a)
		{
			printf("%d",count);
			break;
		}
		count++;
		sum = lostroom(sum);
	}
}

int lostroom(int a)
{
	int b, c, d;
	
	b = a / 10;
	c = a % 10;
	d = (c * 10) + ((b + c) % 10);
	return (d);
}
