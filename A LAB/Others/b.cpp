#include <iostream>
using namespace std;

int binarySearch(int *arr, int start, int end, int key)
{
    int mid = (start + end) / 2;
    while (start <= end)
    {
        if (arr[mid] == key)
        {
            return mid;
            break;
        }
        else if (arr[mid] < key)
        {
            return binarySearch(arr, mid+1, end, key);
        }
        else
        {
            return binarySearch(arr, start, mid-1, key);
        }
        mid = (start + end) / 2;
    }
    return -1;
}

int main()
{
    int arr[6] = {4, 3, 5, 6, 6, 4};
    int key;
    cin >> key;
    cout << binarySearch(arr, 0, 5, key);
}