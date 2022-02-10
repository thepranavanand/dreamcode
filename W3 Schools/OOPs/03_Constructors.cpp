#include <iostream>
using namespace std;

class myclass
{
public: //A constructor is always public
    myclass() //The constructor has the same name as the class(name)and it does not have any return value.
    {
        cout << "Hello, World!";
    }
};

int main()
{
    myclass myobj;  // Create an object of MyClass (this will call the constructor)
    return 0;
}