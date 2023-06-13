#include<iostr
using namespace std;
void revArr(int *arr, int i, int n){
    if(i<=n){
        if(arr[i]!=arr[n-1]) return false;
        revArr(arr, i+1, n-1);
    }
    or
    if(i<=n/2){
        swap(arr[i], arr[n-i-1]);
        revArr(arr, i+1, n);
    }
}

bool pali(string str, int i, int n){
    if(i<=n){
        if(str[i
}

bool pali(string str, int i, int n){
    if(i<=n/2){
        if(str[i]!=str[n-i-1]) return false;
        pali(str, ++i, n);
    }
    return true;
}

int main(){
    int n=5;
    int arr[n]={4,3,2,5,6};
    revArr(arr,0, n);
    for(int i: arr){
        cout << i <<" ";
    }
    string str;
    cin >> str;
    pali(str, 0, str.size()) ? cout << "true" : cout << "false";
}