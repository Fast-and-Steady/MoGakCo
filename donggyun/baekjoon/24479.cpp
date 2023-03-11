#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

vector<vector<int>> alist(1000001);
int visit[1000001];
int idx = 1;
int arr[1000001];

void	dfs(int now)
{
	arr[now] = idx;
	idx++;
	for (int x = 0; x < alist[now].size(); x++)
	{
		int next = alist[now][x];
		if (visit[next] != 0) continue;
		visit[next] = 1;
		dfs(next);
	}
}

int main()
{
	int a , b , c;
	cin >> a >> b >> c;
	for (int x = 0; x < b; x++)
	{
		int node;
		int data;
		cin >> node >> data;
		alist[node].push_back(data);
		alist[data].push_back(node);
	}
	for (int y = 0; y < alist.size(); y++)
		sort(alist[y].begin(), alist[y].end());
	visit[c] = 1;
	dfs(c);
	for (int i = 1; i <= a; i++)
	{
		cout << arr[i] << "\n";
	}
	return (0);
}