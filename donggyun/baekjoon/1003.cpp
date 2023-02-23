#include <iostream>
using namespace std;

int i = 2;
int j = 1;

void run(int lev)
{
    int val;

    val = i;
    i += j;
    j = val;
    if (lev > 4)
        return (run(lev - 1));
}

int main()
{
	int n;
	int idx;
	cin >> idx;
	for (int x = 0; x < idx; x++)
	{
		cin >> n;
		if (n == 0)
			cout << "1 0\n";
		else if (n == 1)
			cout << "0 1\n";
		else if(n == 2)
			cout << "1 1\n";
		else if (n == 3)
			cout << "1 2\n";
		else
		{
			i = 2;
			j = 1;
			run(n);
			cout << j << " " << i << "\n";
		}
	}
}