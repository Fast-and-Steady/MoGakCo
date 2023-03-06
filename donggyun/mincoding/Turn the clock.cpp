#include <vector>
#include <string>
#include <iostream>
#include <queue>

using namespace std;

int map[3][3] = {
	0,12,0,
	9,0,3,
	0,6,0,
};

void	spin()
{
	// 0,1 -> 1,2
	// 1,2 -> 2,1
	// 2,1 -> 1,0
	// 1,0 -> 0,1
	int temp;

	temp = map[0][1];
	map[0][1] = map[1][0];
	map[1][0] = map[2][1];
	map[2][1] = map[1][2];
	map[1][2] = temp;
}

int main()
{
	int n;
	cin >> n;
	for (int x = 0; x < n / 90; x++)
		spin();
	for (int y = 0; y < 3; y++)
	{
		for (int x = 0; x < 3; x++)
		{
			if (map[y][x] == 0) continue;
			cout << map[y][x] << " ";
		}
	}
	return (0);
}