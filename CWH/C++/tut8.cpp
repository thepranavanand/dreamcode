#include<iostream>
#include<iomanip>

using namespace std;

int main(){
    // int a = 34;
    // cout<<"The value of a was:"<<a<<endl;
    // a = 45;
    // cout<<"The value of a is:"<<a;

    //CONSTANTS IN C++

    /* If we mention const before int as const int a = 3;, a will become read only variable and will never be changed.*/

    //const int a = 3;
    //cout<<"The value of a was:"<<a<<endl;
    //a = 45; 
    // You will get an error because a is a constant.
    //cout<<"The value of a is:"<<a;

    // ****** MANIPULATORS IN C++ ******//
    //Examples are endl, setw, etc.

    int a = 5, b = 95, c = 1695;

    /*cout<<"The value of a without setw is:"<<a<<endl;
    cout<<"The value of a without setw is:"<<b<<endl;
    cout<<"The value of a without setw is:"<<c<<endl;*/
    cout<<"The value of a is:"<<setw(5)<<a<<endl;
    /*cout<<"The value of b is:"<<setw(5)<<b<<endl;
    cout<<"The value of c is:"<<setw(5)<<c<<endl;*/

    // ****** OPERATOR PRECEDENCE ****** // https://youtu.be/i3a-G6Ebh9E // Timestamp : 11:30 

    // int a=3,b=4;
    //int c = a*5+b;
    // int c = ((((a*5)+b)-45)+87);
    // cout<<c;

    return 0;

}

