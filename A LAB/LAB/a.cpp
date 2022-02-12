
#include "bits/stdc++.h"
using namespace std;


 // } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int minimumAttacks(int X, int K) 
    {
        int T = 1;
        int i = 2;
        while(X<=K)
        {
            X+=i;
            i = i+2;
            T +=1;
        }
        return T;
    }
};


// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int X, K;
        cin >> X >> K;
        Solution ob;
        cout << ob.minimumAttacks(X, K) << "\n";
    }
}  // } Driver Code Ends