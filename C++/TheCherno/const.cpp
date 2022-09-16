#include<iostream>
int main (){
    int num1 = 1, num2 = 2;
    int* const a = &num1;
    // a = &num2; //can't do
    *a = 0; 
    std::cout << "Here just a is constant so pointer a can be changed. \nValue of a: "<< *a << std::endl;

    int const* b = &num1;
    b = &num1;
    // *b = 0;
    std::cout << "Here just pointer b is constant so variable b can be changed. \nValue of b: " << *b << std::endl;
}