#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

string sum(string a, string b, string c)
{
	string temp;

	reverse(b.begin(), b.end());
	reverse(c.begin(), c.end());
	reverse(a.begin(), a.end());
	temp = a + b + c;
	return (temp);
}

int main()
{
	string str;
	cin >> str;
	string temp1;
	string temp2;
	string temp3;
	string ret = "";
	string q;
	int len = str.length() - 2;
	for (int i = 0; i < len; i++)
	{
		temp1 += str[i];
		temp2 = "";
		temp3 = "";
		for (int j = 0; j < len - i; j++)
		{
			temp2 += str[i + 1 + j];
			temp3 = str.substr(i + 2 + j, len + 2);
			q = sum(temp1, temp2, temp3);
			if (q < ret) ret = q;
			else if (ret == "") ret = q;
		}
	}
	cout << ret;
	return (0);
}
