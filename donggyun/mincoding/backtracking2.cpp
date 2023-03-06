#include <iostream>
#include <vector>

using namespace std;

int map[5];
char path[100];
int cnt;

void	dfs(int lev)
{
	int sum = 0;
	if (lev == 5)
	{
		for (int x = 0; x <= lev; x++)
		{
			if (path[x] == 1)
			{
				sum += map[x];
			}
		}
		if (sum >= 10 && sum <= 20)
			cnt++;
		return ;
	}
	for (int x = 0; x < 2; x++)
	{
		if (x == 0) path[lev] = 0;
		else path[lev] = 1;
		dfs(lev + 1);
	}
}

int main()
{
	for (int x = 0; x < 5; x++)
		cin >> map[x];
	dfs(0);
	cout << cnt;
	return (0);
}