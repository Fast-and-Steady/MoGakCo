#include <string>
#include <iostream>
#include <vector>

using namespace std;
vector<vector<char>> arr(8);

int main()
{
	string name = "ABHCDGEF";
	arr[0] = {1, 2, 3};
	arr[3] = {4, 5, 6};
	arr[4] = {7};
	char tar;
	cin >> tar;
	int q;
	for (int x = 0; x < name.length(); x++)
	{
		if (tar == name[x])
		{
			q = x;
			break;
		}
	}
	for (int y = 0; y < arr.size(); y++)
	{
		for (int x = 0; x < arr[y].size(); x++)
		{
			if (arr[y][x] == q)
			{
				for (int z = 0; z < arr[y].size(); z++)
				{
					if (name[arr[y][z]] != tar)
						cout << name[arr[y][z]] << " ";
				}
				return (0);
			}
		}
	}
	cout << "없음";
	return (0);
}