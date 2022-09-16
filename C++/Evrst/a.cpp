#include<iostream>
using namespace std;

void binarySearch(int *arr, int key, int N){
    int start = 0;
    int end = N-1;
    int mid = start+(end-start)/2;
    while(start<=end){
        for(int i=0; i<N; i++){
            if(key<arr[mid]){
                end = mid-1;
            } else if (key>arr[mid]){
                start = start + 1;
            } else {
                return mid;
            }
            mid = start+(end-start)/2;
        }
    }
}

int main (){
    int N, key;
    cin >> N;
    int arr[N];
    for(int i = 0; i<N; i++){
        cin >> arr[i];
    }
    cin >> key;
    cout << binarySearch(arr, key, N);
}