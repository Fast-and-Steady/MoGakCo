#include <vector>
#include <iostream>
#include <string>

using namespace std;

int main()
{
	int tar;
	cin >> tar;
	int max_len = 64;
	int stick[] = {64, 32, 16, 8, 4, 2, 1};
	int cnt = 0;
	for (int x = 0; x < 7; x++)
	{
		if (tar < stick[x]) continue;
		tar -= stick[x];
		cnt++;
	}
	cout << cnt;
	return (0);
}