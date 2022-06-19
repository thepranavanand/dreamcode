// https://youtu.be/oVa8DfUDKTw
// both the arrays are sorted in non descending order.


//Method 1 :
// Approach is right but is not optimized and hence will give TLE.
/*
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
    int arr[8] = {1, 3, 4, 5, 9, 12, 13, 20};
    int fun[9] = {3, 4, 5, 7, 9, 11, 15, 18, 20};
    intersection(arr, 8, fun, 9);
    return 0;
}*/

#include<iostream>
using namespace std;

void intersection(int *arr, int N, int *fun, int M){
    int i = 0;
    int j = 0;
    while(i<N && j<M){
        if(arr[i]==fun[j]){
            cout << arr[i] <<" ";
            i++;
            j++;
        }else if(arr[i]<fun[j]){
            i++;
        }else{
            j++;
        }
    }
}
int main()
{
    int arr[8] = {1, 3, 4, 5, 9, 9, 13, 20};
    int fun[9] = {3, 4, 5, 7, 9, 13, 15, 18, 20};
    intersection(arr, 8, fun, 9);
    return 0;
}
