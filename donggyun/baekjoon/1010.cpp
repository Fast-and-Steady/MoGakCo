#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

long long factorial(int n, int z)
{
	int i = 0;
	long long sum = 1;
	while (z > 0)
	{
		sum *= n;
		n--;
		z--;
	}
	return (sum);
}

int main()
{
	int z = 0;
	cin >> z;
	for (int x = 0; x < z; x++)
	{
		int n, range, temp;
		cin >> n >> range;
		if (range / 2 < n)
			temp = range - n;
		else
			temp = n;
		long long q = factorial(range, temp);
		long long p = factorial(temp, temp);
		cout << q / p << endl;
	}
	return(0);
}