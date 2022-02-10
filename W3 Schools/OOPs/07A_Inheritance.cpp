// Inheritance is grouped into two categories namely :
// derived class (child) - the class that inherits from another class
// base class (parent) - the class being inherited from

#include <iostream>
#include <string>
using namespace std;

class car
{ // base class
public:
    string name;
    int year;
};

class vehicle : public car
{ // derived class
public:
    string model;
};

// similarly, multilevel inheritance also happens as a class can also be derived from one class, which is already derived from another class.

/* e.g.
class MyClass {
  public:
    void myFunction() {
      cout << "Some content in parent class." ;
    }
};

// Derived class (child)
class MyChild: public MyClass {
};

// Derived class (grandchild)
class MyGrandChild: public MyChild {
};
*/

int main()
{
    vehicle myobj;
    myobj.name = "Ford";
    myobj.model = "Mustang";
    myobj.year = 1987;
    cout << "\n"
         << myobj.name << " " << myobj.model << " " << myobj.year << "\n\n";
    return 0;
}