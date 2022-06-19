#include <iostream>
#include "arrPrint.h"
using namespace std;

void rotate(int *arr, int N, int n)
{
    int temp[N], i = 0, j = N - 1;
    for (int i = 0; i < N; i++)
    {
        temp[i] = arr[i];
    }
    while (i < j)
    {
        swap(temp[i], temp[j]);
        i++;
        j--;
    }
    for (int i = 0; i < N - n; i++)
    {
        arr[i] = arr[i + n];
    }
    for (int i = 0; i < n; i++)
    {
        arr[N - i - 1] = temp[i+N-n];
    }
}

int main()
{
    int n;
    cin >> n;
    int arr[5] = {1, 3, 5, 7, 9};
    rotate(arr, 5, n);
    printArr(arr, 5);
}