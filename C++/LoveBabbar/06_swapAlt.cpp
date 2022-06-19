// https://youtu.be/oVa8DfUDKTw

#include <iostream>
using namespace std;

void swapAlt(int arr[], int N){
    for(int i = 0; i<=N/2; i+=2){ 
        // or we can write i < N in for loop and inside the loop, specify an if condition as  if(i+1<N).
        swap(arr[i], arr[i+1]);
    }
}

int main()
{
    int arr[1000], N;
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        cin >> arr[i];
    }
    swapAlt(arr, N);
    for (int i = 0; i < N; i++)
    {
        cout << arr[i];
    }
}