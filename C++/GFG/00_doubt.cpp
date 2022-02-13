#include <iostream>
using namespace std;

int main()
{

    if (int(sizeof(int)) > -1)
        cout << sizeof(int);
    else
        cout << "No";
    return 0;
}
