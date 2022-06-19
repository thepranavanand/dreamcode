// Q. Find first and last occurence of a number.

// Here, time complexity is O(logN);

#include <iostream>
#include <vector>
using namespace std;

int foc(int *arr, int N, int key) //"vector<int> &" in place of int* for using vector pair;
{
    int start = 0;
    int end = N - 1;
    int mid = start + (end - start) / 2;
    int ans = -1;
    while (start <= end)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            end = mid - 1;
        }
        if (arr[mid] < key)
        {
            start = mid + 1;
        }
        if (arr[mid] > key)
        {
            end = mid - 1; // Considering the case in which first mid calculated is greater than key.
        }
        mid = start + (end - start) / 2;
    }
    return ans;
}
int loc(int *arr, int N, int key) //"vector<int> &" in place of int* for using vector pair;
{
    int start = 0;
    int end = N - 1;
    int mid = start + (end - start) / 2;
    int ans = -1;
    while (start <= end)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            start = mid + 1;
        }
        if (arr[mid] > key)
        {
            end = mid - 1;
        }
        if (arr[mid] < key)
        {
            start = mid + 1; // Considering the case in which first mid calculated is smaller than key.
        }
        mid = start + (end - start) / 2;
    }
    return ans;
}

// pair<int, int> floc(vector<int> &arr, int N, int key)
// {
//     pair<int, int> p;
//     p.first = foc(arr, N, key);
//     p.second = loc(arr, N, key);
//     return p;
// }

int main()
{
    int key;
    cin >> key;
    int arr[9] = {2, 4, 7, 7, 7, 7, 7, 8, 9};

    cout << "first occurence of " << key << " is " << foc(arr, 9, key) << " and last occurence of " << key << " is " << loc(arr, 9, key);
    cout << "Total occurence of " << key << " is " << (loc(arr, 9, key) - foc(arr, 9, key)) + 1;
}

// Complexity is O(n) here.

// #include <iostream>
// using namespace std;

// void occurence(int *arr, int N, int key)
// {
//     int in = 0, en = 0;
//     for (int i = 0; i < N; i++)
//     {
//         if (arr[i] == key)
//         {
//             in = i;
//             en = i;
//             break;
//         }
//         in = -1;
//     }
//     if (in != -1)
//     {
//         for (int i = in; i < N; i++)
//         {
//             if (arr[i] == key)
//             {
//                 en++;
//             }
//         }
//     }
//     en = en - 1;
//     cout << "initial location is " << in << " and last occurence is " << en;
// }

// int main()
// {
//     int key;
//     cin >> key;
//     int arr[6] = {2, 4, 5, 8, 10, 12};
//     occurence(arr, 6, key);
// }