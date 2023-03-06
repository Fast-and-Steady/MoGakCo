#include <string>
#include <vector>
#include <queue>
#include <iostream>

using namespace std;

char path[10];

void	solve(int n, int lev)
{
	if (lev == n)
	{
		cout << path << endl;
		return ;
	}
	for (int x = 0; x < 2; x++)
	{
		if (x == 0) path[lev] = 'o';
		else path[lev] = 'x';
		solve(n, lev + 1);
	}
}

int main()
{
	int n;
	cin >> n;
	solve(n, 0);
	return (0);
}