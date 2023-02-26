/* ///////////////////////////////////////////////////////////////////////////////////////////////////////

[Problem Statement]
Given an NxM matrix of all 1s and 0s, find the largest submatrix which is a square containing all 1s.

[Input]
There will be several test cases in the input. 
Each test case will begin with two integers, N and M (1 ≤ N,M ≤ 1,000) 
indicating the number of rows and columns of the matrix. 
The next N lines will each contain M space-separated integers, guaranteed to be either 0 or 1. 
The input will end with a line with two 0s.

[Output]
For each test case, print a single integer, 
indicating the width (and height) of the largest square of all 1s, or 0 if there are no 1s. 
Print no extra spaces, and do not print any blank lines between answers.

[Examples]

input :
4 5
0 1 0 1 1
1 1 1 1 1
0 1 1 1 0
1 1 1 1 1
3 4
1 1 1 1
1 1 1 1
1 1 1 1
6 6
0 0 0 0 0 0
0 0 0 0 0 0
0 0 0 0 0 0
0 0 0 0 0 0
0 0 0 0 0 0
0 0 0 0 0 0
0 0

output :
3
3
0
/////////////////////////////////////////////////////////////////////////////////////////////////////// */

#include <stdio.h>
#include <stdlib.h>

int **create_double_arr(int **array, int *arr, int row, int col)
{
    int r_i = 0;
    int c_i = 0;
    int _i = 0;
    int i = 0;

    array = (int **)malloc(sizeof(int *) * row);
    while (_i < row)
    {
        array[_i] = (int *)malloc(sizeof(int) * col);
        _i++;
    }
    while (r_i < row)
    {
        c_i = 0;
        while (c_i < col)
        {
            array[r_i][c_i] = arr[i];
            i++;
            c_i++;
        }
        r_i++;
    }
    return (array);
}

void free_array(int **array, int row)
{
    int r_i = 0;

    while (r_i < row)
    {
        free(array[r_i]);
        r_i++;
    }
    free(array);
}

int min(int nb1, int nb2)
{
    if (nb1 < nb2)
        return (nb1);
    return (nb2);
}

int all_zero(int **arr, int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        for (int k = 0; k < col; k++)
        {
            if (arr[i][k])
                return (0);
        }
    }
    return (1);
}

void solve(int **arr, int row, int col)
{
    int r = 1;
    int c = 1;
    int max = 0;
    int min_value = 0;
    if (!all_zero(arr, row, col))
        max = 1;
    while (r < row)
    {
        c = 1;
        while (c < col)
        {
            if (arr[r][c])
            {
                min_value = min(min(arr[r][c - 1], arr[r - 1][c - 1]), arr[r - 1][c]);
                if (min_value == 0)
                    arr[r][c] = 1;
                else
                    arr[r][c] = min_value + 1;
                if (max < arr[r][c])
                    max = arr[r][c];
            }
            c++;
        }
        r++;
    }
    printf("%d\n", max);
}

int main()
{
    int row = 0;
    int col = 0;
    int size = 0;
    int arr_i;
    int *arr;
    int **array;

    while (1)
    {
        scanf("%d %d", &row, &col);
        if (row == col && !row)
            break;
        arr_i = 0;
        size = (row * col);
        arr = (int *)malloc(sizeof(int) * size);
        while (arr_i < size)
        {
            scanf("%d", &arr[arr_i]);
            arr_i++;
        }
        array = create_double_arr(array, arr, row, col);
        solve(array, row, col);
        free_array(array, row);
        free(arr);
    }
    return (0);
}