#include <stdio.h>

void str_check(int number, char strs[][51])
{
    for (int i = 0; i < number; i++){
        for (int j = 0; strs[i][j]; j++){
            if (strs[0][j] != strs[i][j])
                strs[0][j] = 63;
        }
    }
}

void str_init(int number, char strs[][51])
{
    for(int i = 0; i < number; i++)
    {
        scanf("%s", strs[i]);
        getchar();
    }
}

int main()
{
    int number; scanf("%d", &number);
    char file_list[51][51] = { 0, };
    str_init(number, file_list);
    str_check(number, file_list);
    printf("%s", file_list[0]);
}
