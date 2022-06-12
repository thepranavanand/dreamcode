#include<iostream>
#include<climits>
using namespace std;

void rev(int n)
{
    int fnum = 0;
    int temp;
    while(n!=0)
    {
        temp = n%10;
        if(n)
        fnum = (fnum*10)+temp;
        n = n/10;
    }
    cout << fnum;
}

int main ()
{
    int a = 123;
    rev(a);
}