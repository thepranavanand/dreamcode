#include<iostream>
#include<cmath>
using namespace std;

int main ()
{
    int num1;
    cin>>num1;
    int l_num = num1%10;
    int t_num = (int)log10(num1);
    int digit = pow(10, t_num);
    int f_num = num1/digit;
    int r_num = l_num*(int)digit;
    r_num += num1%(int)digit;
    r_num -= l_num;
    r_num += f_num;
    cout<<r_num;
    return 0;
}