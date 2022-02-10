#include<iostream>
using namespace std;

int main(){
    // What is a pointer? ---> data type which holds the address of other data types
    
    int a = 3;
    int* b = &a;
    // & ---> Address of Operator
    cout<<"The address of a is "<<&a<<endl;
    cout<<"The address of a is "<<b<<endl;
    // * ---> Dereference Operator
    cout<<"The value at address b is "<<*b<<endl;

    // Now if we have to find the address of b,
    // we'll use "Pointer to Pointer operator"

    int** c = &b;
    cout<<"The address of b is "<<&b<<endl;
    cout<<"The address of b is "<<c<<endl;
    cout<<"The value at address c is "<<**c<<endl;
    

    int*** d = &c;
    cout<<"Experiment "<<d;
    return 0;
}