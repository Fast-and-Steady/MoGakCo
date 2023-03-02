#include <string>
#include <iostream>
#include <vector>

using namespace std;

int ft_atoi(string str)
{
	int i = 0;
	int sum = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		sum = sum * 10 + str[i] - '0';
		i++;
	}
	return (sum);
}

void	revers(string *str)
{
	char temp;
	for (int i = 0; i < str->length() / 2; i++)
	{
		temp = (*str)[i];
		(*str)[i] = (*str)[str->length() - 1 - i];
		(*str)[str->length() - 1 - i] = temp;
	}
}

int main()
{
	string str1;
	string str2;

	cin >> str1;
	cin >> str2;
	revers(&str1);
	revers(&str2);
	int z = ft_atoi(str1) + ft_atoi(str2);
	int i = 0;
	char temp[1000] = {0};
	while (z > 0)
	{
		temp[i] = char(z % 10 + '0');
		z /= 10;
		i++;
	}
	cout << ft_atoi(temp);
	return (0);
}