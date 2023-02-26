#include <iostream>
#include <stdio.h>
#include <string>
#include <vector>

using namespace std;

int dat[200];
int main()
{
    int max = 0;
    string str;
    char c;
    cin >> str;
    for (int x = 0; x < str.length(); x++)
        if (str[x] >= 'a' && str[x] <= 'z')
            str[x] -= 32;
    for (int x = 0; x < str.length(); x++)
    {
        dat[str[x]]++;
        if (dat[str[x]] > max)
        {
            max = dat[str[x]];
            c = str[x];
        }
    }
    int cnt = 0;
    for (int x = 0; x < 200; x++)
    {
        if (dat[x] == max)
            cnt++;
    }
    if (cnt > 1) cout << "?";
    else cout << c;
    return (0);
}