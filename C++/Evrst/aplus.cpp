#include <iostream>
using namespace std;

int main()
{
    int a = 8, b = 4; // we can't use const before int here because it will make the value of a and b constant and we'll not be able to run the given code.
    cout << "Looney Tunes" << endl;
    cout << ++a << endl;
    cout << a++ << endl;
    cout << b++ << endl;
    cout << a++ << endl;
    cout << ++b << endl;
    return 0;
}