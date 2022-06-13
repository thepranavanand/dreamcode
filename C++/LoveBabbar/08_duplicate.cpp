/*
Q. You are given an array ARR of size N containing each number between 1 and (N - 1) at least once. There is a single integer value that is present in the array twice. Your task is to find the duplicate integer value present in the array.
*/

#include <iostream>
using namespace std;

int duplicate(int *arr, int N){
    int temp = 0;
    for(int i = 0; i<N; i++){
        temp = temp^arr[i]; // here, the duplicate pair is removed and result of rest is stored in temp.
    }

    for(int i = 1;i<=N-1;i++){
        temp = temp^i; //here, the xor of rest unique elements stored in temp are again xor'ed one by one with each element so that every element cancels from the previous array and the unique one remains as that became 0 previously.
    }
    return temp;
}

int main()
{
    int arr[5] = {1, 2, 3, 4, 3};
    int dup = duplicate(arr, 5);
    cout << dup;
}