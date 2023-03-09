#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	string str;
	cin >> str;
	int z = -1;
	while (1)
	{
		z = str.find("XXXX", z + 1);
		if (z == -1)
			break ;
		str.replace(z, 4, "AAAA");
	}
	z = -1;
	while (1)
	{
		z = str.find("XX", z + 1);
		if (z == -1)
			break ;
		str.replace(z, 2, "BB");
	}
	if (str.find("X") != -1)
	{
		cout << -1;
		return (0);
	}
	cout << str;
}