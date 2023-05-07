#include <iostream>
#include <algorithm>
using namespace std;

int max_subarray_sum(int arr[], int n) {
    int max_so_far = arr[0];
    int max_ending_here = arr[0];

    for (int i = 1; i < n; i++) {
        max_ending_here = max(arr[i], max_ending_here + arr[i]);
        max_so_far = max(max_so_far, max_ending_here);
    }

    return max_so_far;
}

int main() {
    int arr[] = {1, -2, 3, 4, -5, 6, -1};

    cout << max_subarray_sum(arr, n) << endl; // Output: 10

    return 0;
}
