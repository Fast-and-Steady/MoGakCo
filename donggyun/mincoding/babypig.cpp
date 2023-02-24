#include <iostream>
#include <vector>
#include <string>

using namespace std;

int map[4][4];

int main()
{
	vector<vector<int>> direct = {
		{-1, -1},
		{-1, 0},
		{-1, 1},
		{0, -1},
		{0, 1},
		{1, -1},
		{1, 0},
		{1, 1}
	};
	int y, x;
	for (int i = 0; i < 3; i++)
	{
		cin >> y >> x;
		map[y][x] = 2;
		for (int j = 0; j < 8; j++)
		{
			int dy = y + direct[j][0];
			int dx = x + direct[j][1];
			if (dy < 4 && dx < 4 && dy >= 0 && dx >= 0 && map[dy][dx] != 2)
				map[dy][dx] = 1;
		}
	}
	for (int y = 0; y < 4; y++)
	{
		for (int x = 0; x < 4; x++)
		{
			if (map[y][x] == 0)
				cout << "_";
			else if (map[y][x] == 2)
				cout << "#";
			else if (map[y][x] == 1)
				cout << "@";
		}
		cout << "\n";
	}
}