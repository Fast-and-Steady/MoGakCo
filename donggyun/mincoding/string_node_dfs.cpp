#include <string>
#include <vector>
#include <iostream>

using namespace std;

int map[8][8];
string name;

void	dfs(int now)
{
	cout << name[now];
	for (int x = 0; x < 8; x++)
	{
		if (map[now][x] == 0) continue;
		dfs(x);
	}
}

int main()
{
	cin >> name;
	for (int y = 0; y < 8; y++)
	{
		for (int x = 0; x < 8; x++)
		{
			cin >> map[y][x];
		}
	}
	dfs(0);
	return (0);
}