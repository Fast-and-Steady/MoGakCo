#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void itoa_rev(int N, char *arr)
{
    for (int i = 0; N > 0; i++){
        arr[i] = N % 10 + '0';
        N = N / 10;
    }
}

void print_num(int N , char *normal)
{
    char reverse[6] = { 0, };

    itoa_rev(N, reverse);
    if (strcmp(normal, reverse) == 0)
        printf("yes\n");
    else
        printf("no\n");
}

int main()
{
    int N;
    char normal[6] = { 0, };
    while (1){
        scanf ("%s", normal);
        getchar();
        N = atoi(normal);
        if (N != 0)
            print_num(N, normal);
        else
            break;
    }
}
