#include <string>
#include <iostream>
#include <vector>

using namespace std;

int map[5][5] = {
	0,0,0,0,1,
	1,0,0,0,0,
	0,1,0,0,0,
	0,1,0,0,0,
	0,0,0,0,0,
};
vector<string> arr(5);
int main()
{
	arr[0] = "Amy";
	arr[1] = "Bob";
	arr[2] = "Chloe";
	arr[3] = "Diane";
	arr[4] = "Edger";
	int max = 0;
	int idx;
	for (int y = 0; y < 5; y++)
	{
		int cnt = 0;
		for (int x = 0; x < 5; x++)
		{
			if (map[x][y] == 1) cnt++;
		}
		if (max < cnt)
		{
			max = cnt;
			idx = y;
		}
	}
	cout << arr[idx];
}