#include <string>
#include <iostream>

using namespace std;

unsigned long long ft_atoi(string str)
{
	int i = 0;
	unsigned long long sum = 0;
	int len = str.length();
	while (i < len)
	{
		sum = sum * 2 + str[i] - '0';
		i++;
	}
	return (sum);
}

int main()
{
	string str;
	string arr;
	string temp;

	cin >> str;
	unsigned long long ret = ft_atoi(str);
	if (ret == 0)
	{
		cout << ret;
		return 0;
	}
	while (ret > 0)
	{
		arr.push_back((ret % 8 + '0'));
		ret /= 8;
	}
	int len = arr.length();
	for (int x = arr.length() - 1; x >= 0; x--)
		cout << arr[x];
	return (0);
}