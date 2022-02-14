#include<iostream>
#define LOG(x) std::cout<<x<<std::endl;

int main ()
{
    int a = 9;
    int b = 3;
    int *ptr = &a;
    *ptr = 1;
    ptr = &b;
    *ptr = 2;

    LOG(a);
    LOG(b); 
}