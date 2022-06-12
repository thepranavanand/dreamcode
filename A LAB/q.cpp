#include <iostream>
using namespace std;

void findLargest(int* arr, int N)
{
 
    for (int i = 1; i < N; i++) {

        if (*arr < *(arr + i)) {
            *arr = *(arr + i);
        }
    }

    cout << *arr <<endl;
}

void findSmallest(int* arr, int N)
{

    for (int i = 1; i < N; i++) {
 
        if (*arr > *(arr + i)) {
            *arr = *(arr + i);
        }
    }
 
    cout << arr[0];
}

int main()
{
    int N = 4;
    int* arr;

    arr = new int[N];
 
    if (arr == NULL) {
        cout << "No memory allocated";
    }
 
    *(arr) = 4;
    *(arr + 1) = 1;
    *(arr + 2) = 2;
    *(arr + 3) = 3;

    findLargest(arr, N);
    findSmallest(arr, N);
    return 0;
}