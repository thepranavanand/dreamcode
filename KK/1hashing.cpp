#include<iostream>
using namespace std;

int main (){
    int n=9;
    int arr[n]= {1,1,2,5,2,1,5,6,1};
    int arrHash[n] = {0};
    int i=0;
    while(i<n){
        int x=arr[i];
        arrHash[x]++;
        i++;
    }
    int query[4]={1,2,5,6};
    i=0;
    int m=4;
    while(i<m){
        cout << "Frequency of "<<query[i]<<" is: "<<arrHash[query[i]] << endl;
        i++;
    }
}