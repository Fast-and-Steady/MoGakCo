#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int n;
int used[200];
int l = 0;
vector<int> temp(100);
vector<int> A;
void find_max(vector<int> B)
{
	int max = -1;
	int dx = 0;
	for (int x = 0; x < n; x++)
	{
		if (max <= B[x] && used[x] != 1)
		{
			max = B[x];
			dx = x;
		}
	}
	temp[dx] = A[l];
	used[dx] = 1;
	l++;
}

int main()
{
	cin >> n;
	
	vector<int> B(51);
	for (int x = 0; x < n; x++)
	{
		int data;
		cin >> data;
		A.push_back(data);
	}
	for (int x = 0; x < n; x++)
		cin >> B[x];
	sort(A.begin(), A.end());
	int gop = 0;
	for (int x = 0; x < n; x++)
	{
		find_max(B);
	}
	for (int x = 0; x < n; x++)
	{
		gop += temp[x] * B[x];
	}
	cout << gop;
	return (0);
}