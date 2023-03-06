#include <queue>
#include <string>
#include <vector>
#include <iostream>

using namespace std;

int map[6][6] = {
	0,0,0,0,1,0,
	1,0,1,0,0,1,
	1,0,0,1,0,0,
	1,1,0,0,0,0,
	0,1,0,1,0,1,
	0,0,1,1,0,0,
};
queue<int> q;
int used[100];

int main()
{
	int n;
	cin >> n;
	used[n] = 1;
	q.push(n);
	while (!q.empty())
	{
		int now = q.front();
		q.pop();
		cout << now << "\n";
		for (int x = 0; x < 6; x++)
		{
			if (map[now][x] == 0) continue;
			if (used[x] == 1) continue;
			used[x] = 1;
			q.push(x);
		}
	}
	return (0);
}