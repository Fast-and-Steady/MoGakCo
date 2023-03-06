#include <iostream>

using namespace std;

int main()
{
	string hero = "BIAH";
	int i = 0;
	int cnt = 1;
	int max = 0;
	cin >> max;
	while (1)
	{
		if (hero.length() == 0)
			return (0);
		if (cnt == max)
		{
			cout << hero[i] <<" ";
			hero.erase(i, 1);
			cnt = 0;
			i -= 1;
		}
		i++;
		if (i == hero.length())
			i = 0;
		cnt++;
	}
	return (0);
}