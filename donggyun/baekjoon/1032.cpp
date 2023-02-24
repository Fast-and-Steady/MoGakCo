#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector<string> arr;
vector<int> p;

void str_cmp(string base, string tar)
{
	for (int x = 0; x < base.length(); x++)
	{
		if (base[x] != tar[x])
			p.push_back(x);
	}
}

int main()
{
	int n;
	cin >> n;
	string temp;
	for (int x = 0; x < n; x++)
	{
		cin >> temp;
		arr.push_back(temp);
	}
	for (int i = 0; i < n; i++)
		for (int j = i + 1; j < n; j++)
			str_cmp(arr[i], arr[j]);
	for (int x = 0; x < p.size(); x++)
	{
		arr[0].erase(p[x], 1);
		arr[0].insert(p[x], "?");
	}
	cout << arr[0];
}