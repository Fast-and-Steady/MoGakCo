#include <string>
#include <vector>
#include <iostream>

using namespace std;

vector<int> arr;
string str;

void	push(int n)
{
	arr.push_back(n);
}

int	printLast()
{
	return (arr.back());
}

void	pop()
{
	arr.pop_back();
}

int main()
{
	int n;

	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> str;
		if (str == "push")
		{
			int data;
			cin >> data;
			push(data);
		}
		else if (str == "printLast")
			cout << printLast() << endl;
		else if (str == "pop")
			pop();
	}
	return (0);
}