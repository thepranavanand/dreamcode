class Solution {
  public:
    int minimumAttacks(int X, int K) {
        int T = 1;
        while(X!=K)
        {
            X+=2;
            T++;
        }
        return T;
    }
};