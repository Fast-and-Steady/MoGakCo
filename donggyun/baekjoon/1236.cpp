#include <string>
#include <vector>
#include <iostream>

using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    vector<string> arr(a);
    vector<int> idx(1000);
    int i = 0;
    for (int x = 0; x < a; x++)
        cin >> arr[x];
    for (int y = 0; y < a; y++)
	{
        if (arr[y].find("X") == -1) 
		{
			idx[i] = y;
			i++;
		}

	}
    int cnt = 0;
	i = 0;
    for (int x = 0; x < b; x++)
    {
        int flag = 0;
        for (int y = 0; y < a; y++)
        {
            if (arr[y][x] == 'X')
            {
                flag = 1;
                break ;
            }
        }
        if (flag == 0)
        {
            arr[idx[i]][x] = 'X';
            cnt++;
			i++;
        }
    }
    for (int y = 0; y < a; y++)
        if (arr[y].find("X") == -1) cnt++;
    cout << cnt;
}