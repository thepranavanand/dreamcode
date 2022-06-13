#include<iostream>
using namespace std;

bool search(int arr[], int N, int key)
{
    for(int i = 0; i<N; i++){
        if(key==arr[i]){
            return 1;
        }
    }
    return 0;
}

int main (){
    int arr[10000];
    int key, N;
    cout << "Enter number of elements in the array"<< endl;
    cin >> N;
    for(int i = 0; i<N; i++){
        cin >> arr[i];
    }
    cout << "Enter the element to search for in the array" << endl;
    cin >> key;
    bool found = search(arr, 10, key);
    if( found){
        cout << "Element was found";
    }
    else{
        cout << "Element was not found";
    }
}