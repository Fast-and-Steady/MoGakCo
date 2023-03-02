#include <vector>
#include <string>
#include <iostream>

using namespace std;
int map[3][3];
int main()
{
	for (int y = 0; y < 3; y++)
		for (int x = 0; x < 3; x++)
			cin >> map[y][x];
	for (int y = 0; y < 3; y++)
	{
		int flag = 0;
		for (int i = 0; i < 3; i++)
		{
			for (int j = i + 1; j < 3; j++)
			{
				if (map[y][i] != map[y][j])
				{
					flag = 1;
					cout << "x\n";
					break ;
				}
			}
			if (flag == 1)
				break ;
		}
		if (flag == 0) cout << map[y][0] << endl;
	}
	return (0);
}