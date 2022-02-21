#include<iostream>
#include<cmath>
using namespace std;

int main ()
{
    int num;
    cin >> num;
    int l_num = num%10;
    int t_num = (int) log10(num);
    int digit = (int) pow(10, t_num);
    int f_num = num/digit;
    int r_num = l_num;
    int r_num += num % (int)round()
    return 0;
}