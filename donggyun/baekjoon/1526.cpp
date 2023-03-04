#include <iostream>
#include <string>

using namespace std;

int main()
{
	string str;
	cin >> str;
	int sum = 0;
	for (int x = 0; x < str.length(); x++)
		sum = sum * 10 + str[x] - '0';
	for (int x = sum; x >= 4; x--)
	{
		int ret = x;
		int flag = 0;
		while (ret > 0)
		{
			int data = ret % 10;
			if (data != 7 && data != 4)
			{
				flag = 1;
				break ;
			}
			ret /= 10;
		}
		if (flag == 0)
		{
			cout << x;
			return (0);
		}
	}
	return (0);
}