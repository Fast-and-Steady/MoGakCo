#include <string>
#include <vector>
#include <iostream>

using namespace std;

int map[6][6] = {
	1,14,17,32,35,8,
	16,31,36,7,18,33,
	13,2,15,34,9,6,
	30,23,28,11,26,19,
	3,12,21,24,5,10,
	22,29,4,27,20,25,
};

//도착가능한 위치
int direct[8][2]
{
	-2,-1,
	-2, 1,
	2, -1,
	2, 1,
	-1, -2,
	-1, 2,
	1, -2,
	1, 2,
};

struct node
{
	int x;
	int y;
};

int visit[36][36];

vector<node> q;

int main()
{
	for (int i = 0; i < 36; i++)
	{
		char x;
		int y;
		cin >> x >> y;
		q.push_back({(x - 'A'), y - 1});
	}
	for (int i = 1; i < 36; i++)
	{
		int x = abs(q[i].x - q[i - 1].x);
		int y = abs(q[i].y - q[i - 1].y);
		
		if (x + y != 3)
		{
			cout << "Invalid";
			return (0);
		}
		if (x + y == 3)
		{
			if (x == 0 || y == 0)
			{
				cout << "Invalid";
				return (0);
			}
		}
		if (visit[q[i].y][q[i].x] == 1)
		{
			cout << "Invalid";
			return (0);
		}
		visit[q[i].y][q[i].x] = 1;
	}
	for (int x = 0; x < 8; x++)
	{
		int dy = q.back().y + direct[x][0];
		int dx = q.back().x + direct[x][1];
		if (dy == q.front().y && dx == q.front().x)
		{
			cout << "Valid";
			return (0);
		}
	}
	cout << "Invalid";
	return (0);
}