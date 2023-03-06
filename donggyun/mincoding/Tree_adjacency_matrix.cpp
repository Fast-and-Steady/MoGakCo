#include <vector>
#include <string>
#include <iostream>
#include <queue>

using namespace std;

int map[6][6] = {
	0,1,0,0,1,0,
	0,0,1,0,0,1,
	0,0,0,1,0,0,
};
int used[100];

void	bfs(int now)
{
	queue<int> q;
	q.push(now);
	while (!q.empty())
	{
		int now = q.front();
		q.pop();
		cout << now << " ";
		for (int x = 0; x < 6; x++)
		{
			if (map[now][x] == 0) continue;
			if (used[x] == 1) continue;
			used[x] = 1;
			q.push(x);
		}
	}
}

int main()
{
	int n;
	cin >> n;
	used[n] = 1;	
	bfs(n);
	return (0);
}