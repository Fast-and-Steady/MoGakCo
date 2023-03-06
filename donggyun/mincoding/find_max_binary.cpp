#include <vector>
#include <string>
#include <iostream>

using namespace std;

int main()
{
	vector<string> arr(3);
	for (int x = 0; x < 3; x++)
		cin >> arr[x];
	int max_len = 0;
	string temp;
	for (int x = 0; x < 3; x++)
	{
		if (arr[x].length() > max_len)
		{
			max_len = arr[x].length();
			temp = arr[x];
		}
		else if (arr[x].length() == max_len)
		{
			if (temp < arr[x])
				temp = arr[x];
		}
	}
	cout << temp;
	return (0);
}