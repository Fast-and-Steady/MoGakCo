#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector<vector<int>> q1 = {{3, 7, 4}, {2, 6, 9}, {5, 1, 2}, {3, 6, 7}};

void	spin(vector<int> *tar)
{
	int temp;

	temp = (*tar)[0];
	(*tar)[0] = (*tar)[2];
	(*tar)[2] = (*tar)[1];
	(*tar)[1] = temp;
}

int main()
{
	for (int x = 0; x < 4; x++)
	{
		int q;
		cin >> q;
		for (int i = 0; i < q; i++)
			spin(&q1[x]);
	}
	for (int x = 0; x < 3; x++)
	{
		cout << q1[0][x] << q1[1][x] <<q1[2][x] << q1[3][x] << endl;
	}
	return (0);
}