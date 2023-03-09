#include <string>
#include <vector>
#include <iostream>

using namespace std;

string borad1[8] = {
	"WBWBWBWB",
	"BWBWBWBW",
	"WBWBWBWB",
	"BWBWBWBW",
	"WBWBWBWB",
	"BWBWBWBW",
	"WBWBWBWB",
	"BWBWBWBW",
};

string borad2[8] {
	"BWBWBWBW",
	"WBWBWBWB",
	"BWBWBWBW",
	"WBWBWBWB",
	"BWBWBWBW",
	"WBWBWBWB",
	"BWBWBWBW",
	"WBWBWBWB"
};

int main()
{
	string map[100];
	int a, b;
	cin >> a >> b;
	for (int y = 0; y < a; y++)
	{
		cin >> map[y];
	}
	int count = 0;
	int min = 12345;
	int count2 = 0;
	for (int j = 0; j < a - 7; j++)
	{
		for (int i = 0; i < b - 7; i++)
		{
			count = 0;
			count2 = 0;
			for (int y = j; y < j + 8; y++)
			{
				for (int x = i; x < i + 8; x++)
				{
					if (borad1[y - j][x - i] != map[y][x])
						count++;
					if (borad2[y - j][x - i] != map[y][x])
						count2++;
				}
			}
			if (min > count2)
			{
				min = count2;
			}
			if (min > count)
			{
				min = count;
			}
			if (count == 0 || count2 == 0)
				min == 0;
		}
	}
	cout << min;
	return (0);
}