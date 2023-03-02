#include <vector>
#include <string>
#include <iostream>

using namespace std;
int map[100][5];
int main()
{
	int a, b;
	cin >> a >> b;
	int i = 0;
	while (1)
	{
		if (b == 0) break ;
		map[i][a] = b;
		i++;
		a++;
		b--;
	}
	i = 0;
	while (1)
	{
		int flag = 1;
		for (int x = 0; x < 5; x++)
		{
			if (map[i][x] == 0) cout << "_";
			else
			{ 
				cout << map[i][x];
				flag = 0;
			}
		}
		if (flag == 1)
			break ;
		cout << endl;
		i++;
	}
	int z = 3;
	return (0);
}