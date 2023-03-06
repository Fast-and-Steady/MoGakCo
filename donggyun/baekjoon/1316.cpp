#include <string>
#include <vector>
#include <iostream>

using namespace std;

int main()
{
	string str;
	int n;
	cin >> n;
	int cnt = 0;
	for (int j = 0; j < n; j++)
	{
		cin >> str;
		int z = 0;
		int visit[200] = { 0 };
		for (int i = 0; i < str.length(); i++)
		{
			if (i > 0 && str[i - 1] != str[i] && visit[str[i]] == 1)
			{
				z = 1;
				break ;
			} 
			visit[str[i]] = 1;
		}
		if (z == 0)
			cnt++;
	}
	cout << cnt;
	return (0);
}