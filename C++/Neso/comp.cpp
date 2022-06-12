// #include<bits.>
#include<iostream>
using namespace std;

void comp(int n){
    int m = n;
    int mask = 0;
    while(n!=0){
        mask = mask<<1|1;
        n = n>>1;
    }
    int sol = ((~m) & mask);
    cout << sol;
}  
int main ()
{
    comp(5);
}