#include <string>
#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int n;
	cin >> n;
	string str;
	for (int x = 0; x < n; x++)
	{
		cin >> str;
		cout << str[0] << str[str.length() - 1] << endl;
	}
	return (0);
}