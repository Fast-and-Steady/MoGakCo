#include <stdio.h>

int main()
{
    int testcase;
    int a, b;

    scanf("%d\n", &testcase);
    for (int i = 0; i < testcase; i++)
    {
        scanf("%d %d", &a, &b);
        int temp = a;
        for (int j = 1; j < b; j++)
        {
            temp = temp * a;
            temp = temp % 10;
        }
        if (temp % 10 == 0)
            printf("%d\n", 10);
        else
            printf("%d\n", temp % 10);
    }
}
