#include <string>
#include <vector>
#include <iostream>

using namespace std;

int main()
{
	int n;
	cin >> n;
	int cnt = 0;
	for (int i = 1; i < 10000; i++)
	{
		for (int j = 1; j < i; j++)
		{
			cnt++;
			if (cnt != n) continue;
			if (i % 2 == 1)
			{
				cout << j << "/" << i - j << " ";
				return (0);
			}
			else
			{
				cout << i - j << "/" << j << " ";
				return (0);
			}
		}
	}
	return (0);
}