#include <iostream>
using namespace std;

void revArr(int *arr, int N)
{
    int start = 0;
    int end = N - 1;
    while (start < end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

int main()
{
    int N;
    cin >> N;
    int arr[N];
    for (int i = 0; i < N; i++)
    {
        cin >> arr[i];
    }
    revArr(arr, N);
    for (int i = 0; i < N; i++)
    {
        cout << arr[i] << " ";
    }
}