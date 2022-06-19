// Find the peak mountain element index.

#include<iostream>
using namespace std;

int mountain(int *arr, int N){
    int start = 0;
    int end = N-1;
    int mid = start + (end-start)/2;
    while(start<end){
        if(arr[mid]<arr[mid+1]){
            start = mid+1;
        }
        else{
            end = mid;
        }
        mid = start + (end-start)/2;
    }
    return mid;
}

int main (){
    int N;
    cin >> N;
    int arr[N];
    for(int i = 0; i<N; i++){
        cin >> arr[i];
    }
    cout << mountain(arr, N);
}