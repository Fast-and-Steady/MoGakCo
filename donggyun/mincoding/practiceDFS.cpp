#include <string>
#include <iostream>
#include <vector>

using namespace std;

int map[10][10];
int used[10];
int n;
void	dfs(int now)
{
	cout << now << " ";
	for (int x = 0; x < n; x++)
	{
		if (map[now][x] == 0 || used[x] == 1) continue;
		used[x] = 1;
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
	used[0] = 1;
	dfs(0);
	return (0);
}