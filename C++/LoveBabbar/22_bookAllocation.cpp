#include <iostream>
#include <climits>
using namespace std;

int arrMin(int *arr, int N)
{
    int mini = INT_MAX;
    for (int i = 0; i < N; i++)
    {
        mini = min(mini, arr[i]);
    }
    return mini;
}

int main()
{
    int sum = 0, fsum = 0, arr1[10], count = 0;
    int arr[6] = {10, 20, 30, 40, 50, 60};
    for (int i = 0; i < 6; i++)
    {
        sum = sum + arr[i];
        for (int j = i + 1; j < 6; j++)
        {
            fsum = 0;
            fsum = fsum + arr[j];
        }
        arr1[i] = max(sum, fsum);
        count++;
    }
    cout << arrMin(arr1, count);
}