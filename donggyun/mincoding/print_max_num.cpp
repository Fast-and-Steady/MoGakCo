#include <vector>
#include <iostream>
#include <string>
#include <queue>
#include <algorithm>
using namespace std;

int main()
{
	int n;
	cin >> n;
	vector<int> arr = {1, 5, 4, 2, -5, -7};
	sort(arr.begin(), arr.end());
	cout << arr[6 - n];
	return (0);
}