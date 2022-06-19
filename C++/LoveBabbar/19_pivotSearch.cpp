// SEARCH IN ROTATED ARRAY (MONOTONIC ORDERED ELEMENTS)
/*
Approach:
    First, we will find pivot.
    Then, we will specify conditions to check whether the value lies on upper side or lower side of the pivot
    Then, rearrange the start and end
    Finally, use binary search to search for the required element.
*/

// Complexity of this solution is O(logN);
#include <iostream>
using namespace std;

int pivS(int *arr, int N, int key)
{
    int start = 0;
    int end = N - 1;
    int mid = start + (end - start) / 2;
    while (start < end)
    {
        if (arr[mid] < arr[0])
        {
            end = mid;
        }
        else
        {
            start = mid + 1;
        }
        mid = start + (end - start) / 2;
    }
    int pivot = start;
    if (key >= arr[pivot] && key <= arr[N - 1]) // Inside this is the code for binary search
    {
        start = pivot;
        end = N - 1;
        int ans;
        while (start <= end)
        {
            int mid = start + (end - start) / 2;
            if (key == arr[mid])
            {
                return mid;
            }
            if (arr[mid] > key)
            {
                end = mid - 1;
            }
            if (arr[mid] < key)
            {
                start = mid + 1;
            }
        }
        return -1; // This value is returned if the main condition is fulfilled(line 22) but none of the conditions inside the while loop match.
    }
    else // Inside this is the code for binary search
    {
        start = 0;
        end = pivot - 1;
        while (start <= end)
        {
            int mid = start + (end - start) / 2;
            if (key == arr[mid])
            {
                return mid;
            }
            if (arr[mid] > key)
            {
                end = mid - 1;
            }
            if (arr[mid] < key)
            {
                start = mid + 1;
            }
        }
        return -1;
    }
}

int main()
{
    int arr[6] = {9, 2, 3, 5, 6, 7};
    int key;
    cin >> key;
    cout << pivS(arr, 6, key);
}