#include <stdio.h>
#include <string.h>

void arrayRev(int arr[10])
{
    int i, j;
    int temp;
    for (i = 0; i < 10 / 2; i++)
    {
        temp = arr[i];
        arr[i] = arr[9 - i];
        arr[9 - i] = temp;
    }
}

void printarr(int arr[])
{
    int i;
    for (i = 0; i < 10; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main()
{
    int i;
    int arr[10] = {3, 4, 9, 1, 4, 0, 5, 3, 8, 9};
    printf("Before reversing :\n");
    printarr(arr);
    printf("After reversing :\n");
    arrayRev(arr);
    printarr(arr);
    return 0;
}