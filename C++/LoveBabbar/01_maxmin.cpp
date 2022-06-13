#include<iostream>
#include<climits>
using namespace std;

int arrLarge(int arr[], int N){
    int maxi = INT_MIN;
    
    for(int i = 0; i<N; i++){
        maxi = max(maxi, arr[i]); //same as below two lines
    //     if(arr[i]>maxi)
    //         maxi = arr[i];
    }
    return maxi;
}

int arrSmall(int arr[], int N){
    int mini = INT_MAX;
    for(int i = 0; i<N; i++){
        mini = min(mini, arr[i]); //same as below two lines
        // if(arr[i]<minin)
        //     mini = arr[i];
    }
    return mini;
}

int main ()
{
    int arr[1000], N;
    cout << "Enter number of terms in the given array:" << endl;
    cin >> N;
    
    for(int i = 0; i<N; i++){
        cin >> arr[i];
    }
    
    int large = arrLarge(arr, N);
    int small = arrSmall(arr, N);
    
    cout << "Largest element: " << large << endl;
    cout << "Smallest element: " << small << endl;
    
    return 0;
}