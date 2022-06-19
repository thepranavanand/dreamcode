//Not done yet......

#include <iostream>
#include "arrPrint.h"
using namespace std;

void sort012(int *arr, int N)
{
    int start = 0, end = N - 1;
    while (start < end)
    {
        if (arr[start] == 0)
        {
            start++;
        }
        if (arr[end] == 2 && start < end)
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
    int arr[9] = {1, 2, 0, 2, 0, 2, 1, 0, 1};
    sort012(arr, 9);
    printArr(arr, 9);
    return 0;
}
