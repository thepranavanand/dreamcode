// https://youtu.be/sNrLlmOIn-c

#include <iostream>
using namespace std;

void reverse(int arr[], int N)
{
    int i = 0, j = N - 1;
    while (i <= j)
    {
        swap(arr[i], arr[j]);
        i++;
        j--:
    }
    //  //  //  //  //  //  //  //  //  //
    // int temp = 0, j = N - 1;
    // for (int i = 0; i <= j; i++)
    // {
    //     swap(arr[i], arr[j]);
    //     j--;
    // }
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
    reverse(arr, N);
    int j = 5;
    for (int i = 0; i < N; i++)
    {
        cout << arr[i];
    }
}