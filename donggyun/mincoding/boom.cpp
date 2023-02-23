#include <iostream>
#include <string>
#include <vector>

using namespace std;

int map[5][4] = { 0 };

int main()
{
	for (int y = 0; y < 5; y++)
		for (int x = 0; x < 4; x++)
			cin >> map[y][x];
	int flag = 0;
	int maxy;
	for (int y = 0; y < 5; y++)
	{
		flag = 0;
		for (int x = 0; x < 4; x++)
		{
			if (map[y][x] == 0)
			{
				flag = 1;
				break;
			}
		}
		if (flag == 0)
		{
			for (int x = 0; x < 4; x++)
				map[y][x] = 0;
			maxy = y;
		}
	}
	for (int y = 0; y < maxy; y++)
	{
		for (int x = 0; x < 4; x++)
		{
			if (map[y][x] == 1)
			{
				map[y + 1][x] = 1;
				map[y][x] = 0;
			}
		}
	}
	for (int y = 0; y < 5; y++)
	{
		for (int x = 0; x < 4; x++)
			cout << map[y][x] << " ";
		cout << endl;
	}
	return (0);
}
