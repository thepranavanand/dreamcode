#include <iostream>
using namespace std;
int varexp(int a, int b)
{
    return (a + b)*6;
}
int main()
{
    int a, b;
    cin>>a>>b;
    cout << varexp(a,b);
    return 0;
}