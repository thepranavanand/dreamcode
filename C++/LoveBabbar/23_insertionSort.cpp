#include <iostream>
#include "arrPrint.h"
using namespace std;

void insertionSort(int *arr, int n)
{
    for (int i = 1; i < n; i++)
    {
        int temp = arr[i];
        int j = i - 1;
        while (temp < arr[j] && j >= 0)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = temp;
    }
}

int main()
{
    int arr[7] = {4, 2, 6, 2, 8, 9, 1};
    insertionSort(arr, 7);
    printArr(arr, 7);
}