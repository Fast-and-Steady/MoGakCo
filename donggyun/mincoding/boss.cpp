#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
	int n;
	cin >> n;
	vector<vector<int>> map(n);
	for (int y = 0; y < n; y++)
	{
		for (int x = 0; x < n; x++)
		{
			int data;
			cin >> data;
			map[y].push_back(data);
		}
	}
	cout << "boss:";
	for (int y = 0; y < n; y++)
	{
		if (map[y][0] == 1) cout << y;
	}
	cout << "\n";
	cout << "under:";
	for (int x = 0; x < n; x++)
	{
		if (map[0][x] == 1) cout << x << " "; 
	}
	return (0);
}