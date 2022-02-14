#include<iostream>
#define LOG(x) std::cout<<x<<std::endl

int main ()
{
    int a = 8;
    int *ptr = &a; // If this would have been a void pointer as void *ptr, it would not print anything on printing *ptr as the computer doesn't know the datatype.
    LOG(*ptr);
    return 0;
}