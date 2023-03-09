#include <iostream>

using namespace std;

int main()
{
	long long a, b, c;
	cin >> a >> b >> c;
	long long ret;
	int count = 0;
	while (1)
	{
		ret = a / b;
		a = a - b * ret;
		if (a < b)
		{
			a = a * 10;
		}
		if (count == c)
			break ;
		count++;
	}
	cout << ret;
	return (0);
}