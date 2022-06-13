// both the arrays are sorted in non descending order.

// to be continued.....

#include <iostream>
#include <climits>
using namespace std;

void intersection(int *arr, int N, int *fun, int M)
{
    int element;
    for (int i = 0; i < N; i++)
    {
        element = arr[i];
        for (int j = 0; j < M; j++)
        {
            if (element < fun[j]){
                break;
            }
            if (element == fun[j])
            {
                element = fun[j];
                cout << element << " ";
                fun[j] = INT_MIN;
                break;
            }
        }
    }
}

int main()
{
    int arr[8] = {3, 4, 4, 7, 9, 11, 13, 15};
    int fun[9] = {3, 4, 5, 7, 9, 11, 15, 18, 20};
    intersection(arr, 8, fun, 9);
    return 0;
}