#include <stdio.h>

void display(int arr[], int size)
{
    for (int i = 0; i < size; i++)
        printf("%d ", arr[i]);
}

void sort(int arr[], int size)
{
    int i = 0;
    int temp = 0;
    while (i < size - 1)
    {
        if (arr[i] > arr[i + 1])
        {
            temp = arr[i + 1];
            arr[i + 1] = arr[i];
            arr[i] = temp;
            i = -1;
        }
        i++;
    }
}

int main(void)
{
    int arr[] = {1, 6, 7, 8, 9, 3, 34, 456, 5, 6, 26, 1, 4, 23, 23, 1, 86, 2, 3};
    int size = sizeof(arr) / sizeof(arr[0]);
    printf("Before : "); display(arr, size); printf("\n");
    sort(arr, size);
    printf("After : "); display(arr, size); printf("\n");
}