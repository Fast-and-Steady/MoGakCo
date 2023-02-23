#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

vector<vector<int>> A = {
	{2, 6, 3},
	{7, 1, 1},
	{3, 4, 2}
};

vector<vector<int>> B = {
	{6, 4, 2, 4},
	{1, 1, 5, 8}
};

vector<vector<int>> c = {
	{9, 2, 3},
	{4, 2, 1},
};

int find_max(vector<vector<int>> *A)
{
	int max = 0;
	int y1;
	int x1;
	for (int y = 0; y < (*A).size(); y++)
	{
		for (int x = 0; x < (*A)[y].size(); x++)
		{
			if ((*A)[y][x] > max)
			{
				max = (*A)[y][x];
				y1 = y;
				x1 = x;
			}
		}
	}
	(*A)[y1][x1] = 0;
	return (max);
}

int find_min(vector<vector<int>> *A)
{
	int max = 999;
	int y1;
	int x1;
	for (int y = 0; y < (*A).size(); y++)
	{
		for (int x = 0; x < (*A)[y].size(); x++)
		{
			if ((*A)[y][x] < max)
			{
				max = (*A)[y][x];
				y1 = y;
				x1 = x;
			}
		}
	}
	(*A)[y1][x1] = 100000;
	return (max);
}

int main()
{
	vector<vector<int>> temp;
	int result[3][3];
	result[0][0] = find_max(&A);
	result[0][1] = find_max(&A);
	result[0][2] = find_max(&A);
	result[1][0] = find_min(&B);
	result[1][1] = find_min(&B);
	result[1][2] = find_min(&B);
	temp = c;
	result[2][2] = find_max(&temp);
	result[2][0] = find_min(&c);
	result[2][1] = find_min(&c);
	for (int y = 0; y < 3; y++)
	{
		for (int x = 0; x < 3; x++)
			cout << result[y][x] << " ";
		cout << endl;
	}
}