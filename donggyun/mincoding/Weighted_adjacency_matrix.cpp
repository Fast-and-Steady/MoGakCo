#include <vector>
#include <iostream>
#include <string>
#include <queue>

using namespace std;

int map[6][6] = {
	0,0,1,0,2,0,
	5,0,3,0,0,0,
	0,0,0,0,0,7,
	2,0,0,0,8,0,
	0,0,9,0,0,0,
	4,0,0,7,0,0
};

int used[20];

void dfs(int now, int *sum)
{
	cout << now << " " << *sum << "\n";
	for (int x = 0; x < 6; x++)
	{
		if (map[now][x] == 0) continue;
		if (used[x] == 1) continue;
		used[x] = 1;
		*sum = *sum + map[now][x];
		dfs(x, sum);
	}
}



int main()
{
	int n;
	cin >> n;
	used[n] = 1;
	int sum = 0;
	dfs(n, &sum);
	return (0);
}