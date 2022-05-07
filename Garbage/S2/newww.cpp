#include<iostream>
using namespace std;
class mfunc
{
    public:
    int sum(int n1, int n2)
    {
        return n1+n2;
    }
    int diff(int n1, int n2)
    {
        return n1-n2;
    }
    int mult(int n1, int n2)
    {
        return n1*n2;
    }
    int div(int n1, int n2)
    {
        return n1/n2;
    }
};
int main ()
{
    int num1, num2;
    cout<<"Enter two numbers :\n";
    cin>>num1>>num2;
    mfunc obj1;
    cout << obj1.sum(num1, num2) << "\n";
    cout << obj1.diff(num1, num2) << "\n";
    cout << obj1.mult(num1, num2) << "\n";
    cout << obj1.diff(num1, num2) << "\n";
    return 0;
}