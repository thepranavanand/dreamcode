#include <iostream>
#include <string>
using namespace std;

class car{
    public:   // Access specifier is by default set to private if you don't set it.
    string model;
    string color;
    int year; // These variable declarations are called attributes.
};
int main (){
    car obj1; // An object called obj1 is created.
    obj1.color = "Yellow";
    obj1.model = "Mustang";
    obj1.year = 1997;

    car obj2; // An object called obj2 is created.
    obj2.color = "Red";
    obj2.model = "Ferrari";
    obj2.year = 1839;

    cout<<obj1.color<<" "<<obj1.model<<" "<<obj1.year<<"\n";
    cout<<obj2.color<<" "<<obj2.model<<" "<<obj2.year<<" ";

    return 0;
}