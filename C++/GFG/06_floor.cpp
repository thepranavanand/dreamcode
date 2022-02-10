// C++ program to demonstrate working of floor()
// Floor rounds off the given value to the closest integer which is less than the given value.
#include<bits/stdc++.h>
using namespace std;

int main()
{
    double x =1.411, y =1.500, z =1.711;
    cout << floor(x) << endl;
    cout << floor(y) << endl;
    cout << floor(z) << endl;

    double a =-1.411, b =-1.500, c =-1.611;
    cout << floor(a) << endl;
    cout << floor(b) << endl;
    cout << floor(c) << endl;
    return 0;
}
