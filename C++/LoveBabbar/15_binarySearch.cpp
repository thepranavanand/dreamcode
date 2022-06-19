// https://youtu.be/YJeoQBevNVo

// Very important condition for binary search : Elements inside array should be in monotonic order : means in ascending or descending order.

// This code has O(logN) time complexity.
#include<iostream>
using namespace std;

int binaryS(int *arr, int N, int key){
    int start = 0;
    int end = N-1;
    while(start<=end){
        int mid = start+(end-start)/2;
        if(arr[mid]==key){
            return mid;
        }
        if(arr[mid]<key){
            start = mid+1;
        }
        if(arr[mid]>key){
            end = mid-1;
        }
    }
    return -1;
}

int main (){
    int arr[10000], N, key;
    cin >> N;
    for(int i = 0; i<N; i++){
        cin >> arr[i];
    }
    cout << "Enter the number to search: \n";
    cin >> key;
    int search = binaryS(arr, N, key);
    cout << search;
    return 0;
}