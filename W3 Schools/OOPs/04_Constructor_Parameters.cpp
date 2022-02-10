#include <iostream>
#include <string>
using namespace std;

class Car // Access Specifier
{
public:
    string Brand;                           // Attribute
    string Model;                           // Attribute
    int year;                               // Attribute
    Car(string str1, string str2, int num1) // Constructor with Parameters defined Inside
    {
        Brand = str1; // Here, We are writing Brand = str1 because str1 will be later taken from main function and will be assigned to Brand
        Model = str2;
        year = num1;
    }
};

/* CONSTRUCTOR WITH PARAMETETS DEFINED OUTSIDE :
Car :: Car(string str1, string str2, int num1) 
{
    Brand = str1;
    Model = str2;
    year = num1;
}
*/

int main()
{
    Car Obj("Audi", "X3", 2020); // Car Object and function call
    Car Obj2("Ferrari", "SX9", 2022); // Car Object and function call

    cout << "\n" << Obj.Brand << " " << Obj.Model << " " << Obj.year << "\n";
    cout << Obj2.Brand << " " << Obj2.Model << " " << Obj2.year << "\n\n";
    return 0;
}