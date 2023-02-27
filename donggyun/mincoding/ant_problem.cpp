#include <iostream>
#include <vector>
#include <iostream>

using namespace std;


int main()
{

	int map[4][4];

	for (int y = 0; y < 4; y++)
	{
		for (int x = 0; x < 4; x++)
			cin >> map[y][x];
	}
	int cnt = 0;
	for (int y = 0; y < 4; y++)
	{
		cnt = 0;
		for (int x = 0; x < 3; x++)
		{
			if (map[y][x] == map[y][x + 1] && map[y][x] == 1)
			{
				cout << "위험한 상태";
				return (0);
			}
		}
	}
	cout << "안전한 상태";
	return (0);
}