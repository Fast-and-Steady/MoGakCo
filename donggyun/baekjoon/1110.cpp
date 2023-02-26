/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int e = n;
    int i = 1;
    while (1)
    {
        n = (n % 10) * 10 + ((n / 10 + n % 10) % 10);
        if (n == e)
            break ;
        i++;
    }
    printf("%d", i);
    return 0;
}