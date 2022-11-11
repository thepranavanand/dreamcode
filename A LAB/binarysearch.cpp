#include <iostream>
using namespace std;

int binarySearch(int *arr, int start, int end, int key)
{
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (key == arr[mid])
        {
            return mid;
        }
        else if (key < arr[mid])
        {
            return binarySearch(arr, start, mid-1, key);
        }
        else
        {
            return binarySearch(arr, start+1, end, key);
        }
    }
    return -1;
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
    int key;
    cin >> key;
    int index = binarySearch(arr, 0, N-1, key);
    if (index==-1) {
        cout << "required element was not found." << endl;
    } else {
        cout << "required index is: " << index << endl;
    }
}