#include<iostream>
using namespace std;

int getPivot(int *arr, int N){
    int start = 0;
    int end = N-1;
    int mid = start + (end-start)/2;
    while(start<end){
        if(arr[mid]>=arr[0]){
            start = ++mid; // Here, mid++ won't work because first value will be assigned and then incremented. Also, this will produce runtime error as incrementing process is also assigned to "start" identifier.
        }
        else{
            end = mid;
        }
        mid = start + (end-start)/2;
    }
    return start;
}

int main (){
    int arr[10000], N;
    cin >> N;
    for(int i = 0; i<N;i++){
        cin >> arr[N];
    }
    cout << getPivot(arr, N);
}