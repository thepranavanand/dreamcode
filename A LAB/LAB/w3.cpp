#include <iostream>
using namespace std;

int main()
{
    string fullName;
    cout << "Type your full name: ";
    getline(cin, fullName);
    cout << "Your name is: " << fullName;

    return 0;
}

// C++ program to demonstrate cin.get()
  
#include <iostream>
using namespace std;
  
int main()
{
    char name[25];
    cin.get(name, 25);
    cout << name;
  
    return 0;
}