#include <vector>
#include <string>
#include <iostream>

using namespace std;

vector<vector<int>> map(7);
int used[10];
int a, b;
int minist = 999;
int flag = 1;
void	dfs(int now, int cnt)
{
	if (now == b)
	{
		flag = 0;
		if (cnt < minist)
			minist = cnt;
		return ;
	}
	for (int x = 0; x < map[now].size(); x++)
	{
		int next = map[now][x];
		if (used[next] == 1) continue;
		used[next] = 1;
		dfs(next, cnt + 1);
		used[next] = 0;
	}
}

int main()
{
	map[1] = {3, 5, 6};
	map[2] = {1, 4};
	map[3] = { 5 };
	map[4] = { 1 };
	map[5] = { 1 };
	
	cin >> a >> b;
	used[a] = 1;
	dfs(a, 0);
	if (flag == 1) cout << 0;
	else cout << minist;
	return (0);
}