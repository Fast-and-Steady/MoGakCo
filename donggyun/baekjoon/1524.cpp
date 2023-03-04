#include <string>
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct node
{
	int n;
	vector<int> power;
};

int main()
{
	int n;
	cin >> n;
	for (int x = 0; x < n; x++)
	{
		node sejun;
		node sebe;
		cin >> sejun.n >> sebe.n;
		for (int x = 0; x < sejun.n; x++)
		{
			int a;
			cin >> a;
			sejun.power.push_back(a);
		}
		for (int x = 0; x < sebe.n; x++)
		{
			int a;
			cin >> a;
			sebe.power.push_back(a);
		}
		sort(sejun.power.begin(), sejun.power.end());
		sort(sebe.power.begin(), sebe.power.end());
		reverse(sejun.power.begin(), sejun.power.end());
		reverse(sebe.power.begin(), sebe.power.end());
		int size = 0;
		int flag = 0;
		if (sejun.power.size() > sebe.power.size())
			size = sejun.power.size();
		else
			size = sebe.power.size();
		while (1)
		{
			if (sejun.power.size() == 0)
			{
				cout << "B\n";
				break ;
			}
			else if (sebe.power.size() == 0)
			{
				cout << "S\n";
				break ;
			}
			if (sejun.power[0] > sebe.power[0])
			{
				cout << "S\n";
				break ;
			} 
			if (sejun.power[0] < sebe.power[0])
			{
				cout << "B\n";
				break ;
			}
			else
			{
				if (sejun.power.back() >= sebe.power.back())
					sebe.power.pop_back();
				else
					sejun.power.pop_back();
			}
		}	
	}
	return (0);
}