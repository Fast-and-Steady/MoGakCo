#include <iostream>
#include <string>
#include <vector>

using namespace std;

int find_min(int base[])
{
	int min = 999;
	int idx;
	static int dat[6] = {0};
	for (int i = 0; i < 6; i++)
	{
		if (min > base[i] && dat[i] != 1)
		{
			min = base[i];
			idx = i;
		}
	}
	dat[idx] = 1;
	return (min);
}

int find_max(int base[])
{
	int max = 0;
	int idx;
	static int dat[6] = {0};
	for (int i = 0; i < 6; i++)
	{
		if (max < base[i] && dat[i] != 1)
		{
			max = base[i];
			idx = i;
		}
	}
	dat[idx] = 1;
	return (max);
}

int main()
{
	char arr[100];
	int base[6];
	for (int x = 0; x < 6; x++)
		cin >> base[x];
	cin >> arr;
	for (int x = 0; x < 6; x++)
	{
		if (arr[x] == 'm')
			cout << find_min(base);
		else
			cout << find_max(base);
	}
}