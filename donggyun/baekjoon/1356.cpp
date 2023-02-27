#include <string>
#include <iostream>
#include <vector>
#include <list>

using namespace std;

int	qwe(list<char> str, string b)
{
	int sum1 = 1;
	int sum2 = 1;
	for (auto i = str.begin(); i != str.end(); i++)
		sum1 *= *i - '0';
	for (int i = 0; i < b.length(); i++)
		sum2 *= b[i] - '0';
	if (sum1 == sum2)
		return (1);
	else
		return (0);
}

int main()
{
	string str;
	string temp;
	list<char> arr;

	cin >> str;
	int len = str.length();
	if (len == 1)
	{
		cout << "NO";
		return (0);
	}
	int x;
	for (x = 0; x < len; x++)
	{
		arr.push_front(str[str.length() - 1]);
		str.pop_back();
		if (qwe(arr, str))
		{
			cout << "YES";
			return (0);
		}
	}
	cout << "NO";
	return (0);
}