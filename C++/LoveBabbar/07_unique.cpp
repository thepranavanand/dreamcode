/*You have been given an integer array/list(ARR) of size N. Where N is equal to [2M + 1].
Now, in the given array/list, 'M' numbers are present twice and one number is present only once.
You need to find and return that number which is unique in the array/list.*/

// https://youtu.be/oVa8DfUDKTw

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