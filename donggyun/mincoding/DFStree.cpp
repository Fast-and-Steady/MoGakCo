#include <iostream>
#include <vector>
#include <string>

using namespace std;

int map[10][10];
int n;


void	dfs(int now)
{
	cout << now << " ";
	for (int x = 0; x < n; x++)
	{
		if (map[now][x] == 0) continue;
		dfs(x);
	}
}

int main()
{
	cin >> n;
	for (int y = 0; y < n; y++)
	{
		for (int x = 0; x < n; x++)
		{
			cin >> map[y][x];
		}
	}
	dfs(0);
	return (0);
}