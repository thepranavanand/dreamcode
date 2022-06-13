#include<iostream>
using namespace std;
int add(int arr[], int N){
    int sum = 0;
    for(int i = 0; i<N; i++){
        sum = sum+arr[i];
    }
    return sum;
}
int main(void)
{
    int arr[1000];
    int N;
    cin >> N;
    for(int i = 0; i<N; i++){
        cin>>arr[i];
    }
    int sum = add(arr, N);
    cout << "Sum of all elements of the given array is : "<< sum;
    return 0;
}
