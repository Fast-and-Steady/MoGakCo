#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
	string arr;

	cin >> arr;
	int dat[126] = {0};
	int cnt = 0;
	for (int x = 0; x < arr.length(); x++)
	{
		if (dat[arr[x]] == 0)
		{
			dat[arr[x]] = 1;
			cnt++;
		}
	}
	cout << cnt << "종류";
	return (0);
}