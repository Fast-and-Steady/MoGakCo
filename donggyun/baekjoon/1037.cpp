#include <vector>
#include <string>
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	vector<int> arr;
	int n;

	cin >> n;
	for (int x = 0; x < n; x++)
	{
		int data;
		cin >> data;
		arr.push_back(data);
	}
	sort(arr.begin(), arr.end());
	cout << arr[0] * arr[arr.size()- 1];
	return (0);
}