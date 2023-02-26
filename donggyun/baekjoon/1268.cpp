/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <string>
#include <vector>

using namespace std;

int visit[1000][1000];

int main()
{
    int n;
    cin >> n;
    vector<vector<int>> map(1000);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            int data;
            cin >> data;
            map[i].push_back(data);
        }
    }
    int data[1000] = { 0 };
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < n; j++)
        {
            for (int z = j + 1; z < n; z++)
            {
                if (map[j][i] == map[z][i] && visit[j][z] != 1)
                {
                    visit[j][z] = 1;
                    data[z + 1]++;
                    data[j + 1]++;
                }
            }
        }
    }
    int max = 0;
    int l = 1;
    for (int x = 0; x < n; x++)
    {
        if (max < data[x])
        {
            max = data[x];
            l = x;
        }
    }
    cout << l;
}