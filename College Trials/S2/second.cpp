#include<iostream>
using namespace std;

int main ()
{
    int i, n, sub, sum = 0;
    cout<<"Enter the number of subjects to find average for :\n";
    cin>>n;
    i = n;
    while(i--)
    {
        cin>>sub;
        sum+=sub;
    }
    cout<<"Average of given marks is :\n"<<sum/n;
    return 0;
}