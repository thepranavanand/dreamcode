#include<stdio.h>

bool isPowerOfTwo(int n)
{
   if(n==0)
   return false;
 
   return (ceil(log2(n)) == floor(log2(n)));
}
 
// Driver program
int main()
{
    isPowerOfTwo(31)? cout<<"Yes"<<endl: cout<<"No"<<endl;
    isPowerOfTwo(64)? cout<<"Yes"<<endl: cout<<"No"<<endl;
 
    return 0;
}