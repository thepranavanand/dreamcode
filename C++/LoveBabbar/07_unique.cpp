#include <iostream>
using namespace std;

int uniq(int *arr, int N)
{
    int unique = 0;
    for (int i = 0; i < N; i++)
    {
        unique = unique ^ arr[i]; //XOR will result in every duplicate element as 0 and finally finding the unique element.
    }
    return unique;
}

int main()
{
    int N = 5;
    int arr[N] = {1,25,1,25,4};

    // cin >> N;
    // for (int i = 0; i < N; i++)
    // {
    //     cin >> arr[i];
    // }
    int uni = uniq(arr, N);
    cout << uni;
    return 0;
}