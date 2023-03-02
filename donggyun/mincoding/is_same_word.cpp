#include <string>
#include <vector>
#include <iostream>
#include <cstring>

using namespace std;
string str1;
string str2;

string bbq(const char *tar)
{
	string temp;
	int i = 0;
	for (int x = 0; x < str1.length(); x++)
	{
		if (tar[i] == str1[x])
		{
			temp += str1[x];
			i++;
		}
		else if (i != 0 && tar[i] != str1[x])
			break ;
	}
	return (temp);
}

int main()
{
	cin >> str1;
	cin >> str2;
	string temp;
	if (str1.length() > str2.length())
	{
		temp = str1;
		str1 = str2;
		str2 = temp;
	}
	string max;
	for (int x = 0; x < str2.length(); x++)
	{
		temp = bbq(str2.c_str() + x);
		if (temp.length() > max.length())
		{
			max = temp;
		}
	}
	cout << max;
	return (0);
}