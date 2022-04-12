#include <iostream>
using namespace std;
 
int cube(int );
 
float cube(float);
 
int main() 
{
    int a = 20;
    float b = 17.71;
    cout<< "Cube of integer number " << a << " is " << cube(a) <<endl;
    cout<< "Cube of float number " << b << " is " << cube(b) <<endl;
    return 0;
}
      
int cube(int x) 
{
    return x*x*x;
}
 
float cube(float y)
{
    return y*y*y;
}
