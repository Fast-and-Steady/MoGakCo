/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    vector<string> str;
    string temp2;
    while (1)
    {
        cin >> temp2;
        if (temp2 == "0") break ;
        str.push_back(temp2);
    }
    char temp1;
    int len;
    for (int y = 0; y < str.size(); y++)
    {
        len = str[y].length();
        temp2 = str[y];
        for (int x = 0; x < len / 2; x++)
        {
            temp1 = str[y][x];
            str[y][x] = str[y][len - x - 1];
            str[y][len - x - 1] = temp1;
        }
        if (str[y] == temp2) cout << "yes" << endl;
        else cout << "no" << endl;
    }
    
    return 0;
}