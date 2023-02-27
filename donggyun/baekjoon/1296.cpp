#include <string>
#include <vector>
#include <iostream>
#include <cstring>

using namespace std;

int main()
{
	vector<string> temp_name;
	string temp;
	string name;
	cin >> name;
	int n;
	cin >> n;
	// 공식만들기
	vector<int> dat(200);
	for (int x = 0; x < name.length(); x++)
		dat[name[x]]++;
	for (int x = 0; x < n; x++)
	{
		cin >> temp;
		temp_name.push_back(temp);
		name = temp;
	}
	int max = 0;
	int p;
	for (int y = 0; y < n; y++)
	{
		p = 1;
		for (int x = 0; x < temp_name[y].length(); x++)
			dat[temp_name[y][x]]++;
		p *= (dat['L'] + dat['O']);
		p *= (dat['L'] + dat['V']); 
		p *= (dat['L'] + dat['E']);
		p *= (dat['O'] + dat['V']);
		p *= (dat['O'] + dat['E']);
		p *= (dat['V'] + dat['E']);
		p %= 100;
		if (p >= max)
		{
			if (p == max)
			{
				if (strcmp(name.c_str(), temp_name[y].c_str()) > 0)
					name = temp_name[y];
			}
			else
			{
				max = p;
				name = temp_name[y];
			}
		}
		for (int x = 0; x < temp_name[y].length(); x++)
			dat[temp_name[y][x]]--;
	}
	cout << name;
	return (0);
}