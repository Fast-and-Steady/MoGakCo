#include <string>
#include <vector>
#include <iostream>
#include <queue>

using namespace std;

int map[6][6] = {
	0,0,1,1,0,1,
	0,0,0,1,1,1,
	0,0,0,0,1,1,
	0,0,0,0,0,0,
	1,0,0,0,0,1,
	0,0,0,0,0,0,
};

int used[10];

void	dfs(int now)
{
	cout << now << " ";
	for (int x = 0; x < 6; x++)
	{
		if (map[now][x] == 0) continue;
		if (used[x] == 1) continue;
		used[x] = 1;
		dfs(x);
	}
}

int main()
{
	int n;
	cin >> n;
	used[n] = 1;
	dfs(n);
	return (0);
}