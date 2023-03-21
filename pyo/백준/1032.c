#include <stdio.h>

int main()
{
	int a;
	char dan[51][51] = {0, };

	scanf("%d", &a);
	for(int y = 0; y < a; y++)
	{
			scanf("%s", dan[y]);
			getchar();
	}
	for(int y = 0; y < a; y++)
	{
		for(int x = 0; dan[y][x] != '\0'; x++)
		{
			if(dan[0][x] != dan[y][x])
			{
				dan[0][x] = '?';
			}
		}
	}
	printf("%s", dan[0]);
}
