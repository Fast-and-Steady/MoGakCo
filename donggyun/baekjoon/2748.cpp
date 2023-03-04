#include <iostream>

using namespace std;

long long fibonacci(int lev, long long i, long long j)
{
    long long val;

    val = i;
    i += j;
    j = val;
    if (lev > 4)
        return (fibonacci(lev - 1, i, j));
    return (i);
}
int main()
{
	int n;
	cin >> n;
	if (n == 0)
		cout << 0;
	else if (n == 1)
		cout << 1;
	else if(n == 2)
		cout << 1;
	else if (n == 3)
		cout << 2;
	else cout << fibonacci(n, 2, 1);
	return (0);
}