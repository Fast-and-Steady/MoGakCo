#include <vector>
#include <iostream>
#include <string>

using namespace std;

int n;
string str;
char temp[100];
void	dfs(int lev)
{
	if (lev == n)
	{
		cout << temp << "\n";
		return ; 
	}
	for (int x = 0; x < str.length(); x++)
	{
		temp[lev] = str[x];
		dfs(lev + 1);
	}
}

int main()
{
	cin >> str;
	cin >> n;
	dfs(0);
	return (0);
}