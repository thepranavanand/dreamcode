
// ****** THIS PROGRAM WILL PRODUCE AN ERROR ******

#include<iostream>
using namespace std;

class myclass
{
    // By default, all members of a class are private if access specifier is not specified.
    public: // Public access specifier
    int x; // Public attribute
    private: // Private access specifier 
    int y; // Private attribute
};

int main ()
{
    myclass myobj;
    myobj.x = 8;
    myobj.y = 9; //Private(not allowed)
    cout<<myobj.x;
    cout<<myobj.y; //This will produce an error with warning "int myclass::y' is private within this context."
}