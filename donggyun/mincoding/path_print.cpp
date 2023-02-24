#include <string>
#include <iostream>
#include <vector>

using namespace std;

int map[10][10];
int path[100];
int n;

void	dfs(int now, int lev)
{
	for (int x = 0; x < n; x++)
	{
		if (map[now][x] == 0) continue;
		path[lev] = x;
		if (lev == 2)
		{
			for (int x = 0; x <= lev; x++)
				cout << path[x] << " ";
			cout << endl;
		}
		dfs(x, lev + 1);
		path[lev] = 0;
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
	path[0] = 0;
	dfs(0, 1);
	return (0);
}