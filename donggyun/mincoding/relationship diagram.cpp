#include <string>
#include <vector>
#include <iostream>

using namespace  std;

int map[4][4];
char name[] = "ABCD";

int main()
{
	for (int j = 0; j < 4; j++)
		for (int i = 0; i < 4; i++)
			cin >> map[j][i];
	int max = 0;
	int idx;
	for (int j = 0; j < 4; j++)
	{
		int cnt = 0;
		for (int i = 0; i < 4; i++)
		{
			if (map[i][j] == 1) cnt++;
		}
		if (max < cnt)
		{
			max = cnt;
			idx = j;
		}
	}
	cout << name[idx];
	return (0);
}