#include <string>
#include <vector>
#include <iostream>
#include <cstring>
#include <algorithm>

using namespace std;


int ft_cmp(string a, string b)
{
	if (a.length() == b.length())
	{
		return (a < b);
	}
	else
	{
		return (a.length() < b.length());
	}
}

int main()
{
	int n;
	cin >> n;
	vector<string> str(n);
	for (int x = 0; x < n; x++)
		cin >> str[x];
	sort(str.begin(), str.end(), ft_cmp);
	for (int x = 0; x < n; x++)
	{
		if (x != 0 && str[x] == str[x - 1]) continue ;
			cout << str[x] << "\n";
	}
	return (0);
}