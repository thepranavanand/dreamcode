#include<iostream>
using namespace std;
int num1 = 7;
int main ()
{
    int num1 = 9;
    cout <<"\n\nGlobal variable is: " << num1 << endl;
    cout <<"Local Variable is: " << ::num1 << "\n\n";
    return 0;
}