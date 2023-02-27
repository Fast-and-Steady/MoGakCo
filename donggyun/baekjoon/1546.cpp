#include <vector>
#include <iostream>
#include <string>

using namespace std;

int main()
{
	int n;

	vector<float> arr;
	cin >> n;
	for (int x = 0; x < n; x++)
	{
		int data;
		cin >> data;
		arr.push_back(data);
	}
	int max = 0;
	int z;
	for (int x = 0; x < arr.size(); x++)
	{
		if (arr[x] > max)
		{
			max = arr[x];
			z = x;
		}
	}
	float sum = 0;
	for (int x = 0; x < arr.size(); x++)
	{
		arr[x] = (arr[x] / max) * 100;
		sum += arr[x];
	}
	cout << sum / n;
	return (0);
}