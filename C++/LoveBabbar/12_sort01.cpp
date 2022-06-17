#include <iostream>
#include "arrPrint.h"
using namespace std;

void sort01(int *arr, int N)
{
    int start = 0, end = N - 1;
    while (start < end)
    {
        if (arr[start] == 0)
        {
            start++;
        }
        if (arr[end] == 1 && start < end)
        // here, and in line 19, we have to check start<end again because maybe in the previous step, start would have become greater than or equal to end;
        {
            end--;
        }
        if (start < end)
        {
            swap(arr[start], arr[end]);
        }
    }
}

int main()
{
    int arr[8] = {1, 1, 0, 0, 0, 0, 1, 0};
    sort01(arr, 8);
    printArr(arr, 8);
    return 0;
}