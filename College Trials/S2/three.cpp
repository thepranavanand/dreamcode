#include <iostream>
#include<cmath>
using namespace std;

int main()
{
    int num1, f_num, l_num, t_num, fun1;
    cout<<"\nEnter a number : \n";
    cin>>num1;
    l_num = num1 % 10;
    t_num= (int)log10(num1);
    f_num = (int) (num1 / pow(10, t_num));
    fun1  = l_num;
    fun1 *= (int) round(pow(10, t_num));
    fun1 += num1 % ((int)round(pow(10, t_num)));
    fun1 -= l_num;
    fun1 += f_num;
    cout<< "Required number is :\n"<< fun1<<endl<<"\n";
    return 0;
}