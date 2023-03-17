#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
	int n;
	cin >> n;
	int dasom;
	cin >> dasom;
	vector<int> arr(100);
	for (int x = 0; x < n - 1; x++)
	{
		cin >> arr[x];
	}
	sort(arr.begin(), arr.end());
	int cnt = 0;
	while (1)
	{
		if (dasom > arr[arr.size() - 1]) break ;
		dasom++;
		arr[arr.size() - 1]--;
		sort(arr.begin(), arr.end());
		cnt++;
	}
	cout << cnt;
	return (0);
}