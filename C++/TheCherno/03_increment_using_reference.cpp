#include<iostream>
#define LOG(x) std::cout<<x<<std::endl;

int inc(int x)
{
    return x++; // What this does is that it just writes int x = the value we passed through this.
    // Thats why we use references for this purpose.
}

int inc_p(int* x)
{
    return (*x)++;
}

int inc_r(int& x)
{
    return (x)++;
}
int main ()
{
    // Increment using pointer.
    int a = 9;
    inc_p(&a);
    LOG(a);

    // Increment using reference. //This is clean to do.
    int b = 68;
    inc_r(b);
    LOG(b);
    return 0;
}