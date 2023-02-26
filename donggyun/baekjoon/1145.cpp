/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int arr[5];
    for (int x = 0; x < 5; x++)
        scanf("%d", &arr[x]);
    int i = 1;
    while (1)
    {
        int cnt = 0;
        for (int x = 0; x < 5; x++)
        {
            if (i % arr[x] != 0) continue ;
                cnt++;
        }
        if (cnt >= 3)
        {
            printf("%d", i);
            return (0);
        }
        i++;
    }
}