#include <string>
#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int size, n; cin >> size >> n;
	vector<int> arr(size);
	vector<int> ret(size - 1);
	for (int x = 0; x < size; x++)
	{
		char tr;
		cin >> arr[x];
		if (x != size - 1)
			cin >> tr;
	}
	for (int i = 0; i < n; i++)
	{
		for (int x = 0; x < arr.size(); x++)
		{
			arr[x] = arr[x + 1] - arr[x];
		}
		arr.pop_back();
	}
	for (int x = 0; x < arr.size(); x++)
	{
		cout << arr[x];
		if (x != arr.size() - 1)
			cout << ",";
	}
	return (0);
}