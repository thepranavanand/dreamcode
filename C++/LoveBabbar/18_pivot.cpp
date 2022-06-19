// Find the pivot element : In a rotated ordered array, find the element next to the highest element using binary Search

#include <iostream>
using namespace std;

int getPivot(int *arr, int N)
{
    int start = 0;
    int end = N - 1;
    int mid = start + (end - start)/ 2;
    while (start < end) // Some info below the code
    {
        if (arr[mid] >= arr[0])
        {
            start = mid + 1; // OR ++mid;
        }
        else
        {
            end = mid;
        }
        mid = start + (end - start)/ 2;
    }
    return start;
}

int main()
{
    int N;
    cin >> N;
    int arr[N];
    for(int i = 0; i<N; i++){
        cin >> arr[i];
    }
    cout << "Pivot is : " << getPivot(arr, N);
}
    //There is this trick. Whenever we move both the start and end as mid+1 or mid-1, we use start <= end. but when only one of them moves, we write start<end. Just an observation, maybe wrong.