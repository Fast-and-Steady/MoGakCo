#include <vector>
#include <string>
#include <iostream>

using namespace std;

int evid[7] = { -1, 0, 0, 1, 2, 4, 4 };
int timestamp[7] = { 8, 3, 5, 6, 8, 9, 10 };
int n;

void	dfs(int n)
{
	if (evid[n] == -1)
	{
		cout <<"0번index(출발)\n";
		return ;
	}
	dfs(evid[n]);
	cout << n << "번index(" << timestamp[n] << "시)\n"; 
}

int main()
{
	cin >> n;
	dfs(n);
	return (0);
}