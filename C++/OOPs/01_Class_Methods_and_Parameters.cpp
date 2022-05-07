#include <iostream>
using namespace std;

class myClass
{
public:
    void helloW() // Inside the class definition // These functions are called class methods.
    {
        cout << "Hello, World! "<<"\n";
    }

    void Outside(); //Outside the class definition

    int represent(int num1); // Parameter declaration
};

void myClass::Outside()
{
    cout << "This function is defined outside the class";
}

int myClass::represent(int num1){ // Parameter definition
    return num1;
}

int main()
{
    myClass myobj;
    myobj.helloW();
    cout<<myobj.represent(5);
    return 0;
}