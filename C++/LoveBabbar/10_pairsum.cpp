// https://youtu.be/oVa8DfUDKTw

#include <iostream>
using namespace std;

void pairSum(int *arr, int N, int key)
{
    for (int i = 0; i < N; i++)
    {
        for (int j = i + 1; j < N; j++)
        {
            int tempsum = arr[i] + arr[j];
            if (tempsum == key)
            {
                cout << min(arr[i], arr[j]) << " " << max(arr[i], arr[j]) << endl;
            }
        }
    }
}

int main()
{
    int arr[10000], N, key;
    cin >> N >> key;
    for (int i = 0; i < N; i++)
    {
        cin >> arr[i];
    }
    pairSum(arr, N, key);
}

// Vector Solution
// Needed because in the output, question asks that output should be sorted such that first number of the two numbers in each line should be in ascending number as for example: if output had to be 2 3 and 1 4 then first 1 4 should be printed then 2 3.
// Which was not possible for me through array as we have to find replacement for line 44 and most importantly 48.
/*
#include <bits/stdc++.h>
vector<vector<int>> pairSum(vector<int> &arr, int s){
    vector< vector<int> > ans;
    for(int i = 0; i< arr.size(); i++){
        for(int j = i+1; j<arr.size(); j++){
            int tempsum = arr[i]+arr[j];
            if(tempsum == s){
                vector<int> temp;
                temp.push_back(min(arr[i], arr[j]));
                temp.push_back(max(arr[i], arr[j]));
                ans.push_back(temp);
            }
        }
    }
    sort(ans.begin(),ans.end());
    return ans;
}
*/
