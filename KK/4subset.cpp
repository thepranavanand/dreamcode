#include<bits/stdc++.h>
using namespace std;

int main (){
    int arr1[4]={2,4,6,7};
    int arr2[2]={6,4};
    int n1=4;
    int n2=2;

    unordered_set<int> m;
    int i=0;
    while(i<n1){
        m.insert(arr1[i]);
        i++;
    }
    for(i=0; i<n2; i++){
        if(m.count(arr2[i]==0)){
            cout << "its not a subset";
            return 0;
        } 
    }
    cout << "its a subset";
    return 0;
}