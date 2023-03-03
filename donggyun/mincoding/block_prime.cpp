#include <string>
#include <vector>
#include <iostream>

using namespace std;

int map[4][5];

int main()
{
	for (int y = 0; y < 4; y++)
		for (int x = 0; x < 5; x++)
			cin >> map[y][x];
	//시작점 구하기
	int flag1 = 0;
	int flag2 = 0;
	int qx;
	int qy;
	for (int y = 0; y < 4; y++)
	{
		for (int x = 0; x < 5; x++)
		{
			if (map[y][x] == 1)
			{
				if (flag1 == 0)
					cout << "(" << y << "," << x << ")\n";
				flag1 = 1;
				qx = x;
				qy = y;
			}
		}
	}
	cout << "(" << qy << "," << qx << ")";
	return (0);
}