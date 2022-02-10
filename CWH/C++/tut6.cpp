// There are two types of header files
// 1. System header files: It comes with the compiler.
#include<iostream>
// 2. User defined header files: It is written by the programmer.
// #include"this.h" --> This will produce an error if this.h is not present in the current directory.                                  

using namespace std;
int a=10, b=3;

int main(){
    cout<<"Operators in C++:"<<endl;
    cout<<"Following are the types of operator in C++"<<endl;
    //Arithmetic operators
    cout<<"The value of a + b is "<<a+b<<endl;
    cout<<"The value of a - b is "<<a-b<<endl;
    cout<<"The value of a * b is "<<a*b<<endl;
    cout<<"The value of a / b is "<<a/b<<endl;
    cout<<"The value of a % b is "<<a%b<<endl;
    cout<<"The value of a ++ is "<<a++<<endl;
    cout<<"The value of a -- is "<<a--<<endl;
    cout<<"The value of ++ a is "<<++a<<endl;
    cout<<"The value of -- a is "<<--a<<endl;
    cout<<endl;

    // Assignment Operators --> Used to assign values to variables
    // int a = 3, b = 9;
    // char 4th ='d';

    // Comparision Operators
    cout<<"Following are the comparision operators in C++"<<endl;
    cout<<"The value of a == b is "<<(a==b)<<endl;
    cout<<"The value of a != b is "<<(a!=b)<<endl;
    cout<<"The value of a > b is "<<(a>b)<<endl;
    cout<<"The value of a < b is "<<(a<b)<<endl;
    cout<<"The value of a <= b is "<<(a<=b)<<endl;
    cout<<"The value of a >= b is "<<(a>=b)<<endl;
    cout<<"The value of a >= b is "<<(a>=b)<<endl;
    cout<<endl;

    // Logical Operators
    cout<<"Following are the logical operators in C++"<<endl;
    cout<<"The value of this logical and operator ((a==b) && (a<b))  is: "<<((a==b) && (a<b))<<endl;
    cout<<"The value of this logical or operator ((a==b) || (a<b))  is: "<<((a==b) || (a<b))<<endl;
    cout<<"The value of this logical not operator ((!a==b))  is: "<<(!(a==b))<<endl;

    return 0;

}    