#include <vector>
#include <string>
#include <iostream>
#include <cstring>

using namespace std;
vector<string> str(100);
char path[100];
int cnt = 0;
int flag = 0;
void dfs(int lev, int idx)
{
	if (lev == 4)
	{
		cnt++;
		if (strcmp(str[idx].c_str(), path) == 0)
		{
			cout << cnt << endl;
			flag = 1;
		}
		return ;
	}
	for (char x = 'A'; x <= 'Z'; x++)
	{
		path[lev] = x;
		dfs(lev + 1, idx);
		if (flag == 1)
			return ;
	}
}

int main()
{
	int n;
	cin >> n;
	for (int x = 0; x < n; x++)
		cin >> str[x];
	for (int x = 0; x < n; x++)
	{
		cnt = 0;
		flag = 0;
		dfs(0, x);
	}
	return (0);
}