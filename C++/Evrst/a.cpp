#include<iostream>
#include"arrPrint.h"
using namespace std;

void occurence(int *arr, int N){
    int uniq[N]={0};
    string a;
    for(int i = 0; i<N; i++){
        for(int j = 1;j<N; j++){
            if(arr[i]==arr[j]){
                uniq[i]++;
                arr[j]=1;
            }
        }
    }
    for(int i = 0; i<N; i++){
        for(int j = 1; j<N; j++){
            if(arr[i]==arr[j]){
                a = "false";
            }
            else{
                a= "true";
            }
        }
    }
    cout << a;
}

int main (){
    int N, arr[10000];
    cin >> N;
    for(int i = 0; i<N; i++){
        cin >> arr[i];
    }
    occurence(arr, N);
    // printArr(arr, N);
    return 0;
}