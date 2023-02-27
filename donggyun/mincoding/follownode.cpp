#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<char> arr(36);

	int n;

	cin >> n;
	for (int x = n; x < n + 4; x++)
	{
		arr[x] = ('A' + (x - 11));
	}
	for (int i = n; i < n + 4; i++)
		cout << arr[i];
}