#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
	int a, b;
	cin >> a >> b;
	int sum = 0;
	int cnt = 0;
	for (int i = 1; i <= 1000; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			cnt++;
			if (cnt >= a)
			{
				sum += i;
			}
			if (cnt == b)
			{
				cout << sum;
				return (0);
			}
		}
	}
	cout << sum;
	return (0);
}