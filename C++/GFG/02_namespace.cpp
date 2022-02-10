// // #include <foo>
// #include <iostream>

// typedef std::cout cout_std;
// // typedef foo::cout cout_foo;

// cout_std << "Something to write";
// // cout_foo << "Something to write";

// comments above are just for understanding. foo doesn't exist. This is just to show that writing "using namespace std" is not a good practice as it may be confusing in case of more than one preprocessor directives. In that case, we typedef those multiple directives.

// below written code has no relation with above mentioned theory.
#include <iostream>
using namespace std;

// Variable created inside namespace
namespace first
{
    int val = 500;
}

// Global variable
int val = 100;

int main()
{
    // Local variable
    int val = 200;
    cout << "this is local variable :" << val << '\n';

    // These variables can be accessed from outside the namespace using the scope operator ::
    cout << "this is variable created inside namespace :" << first::val << '\n';

    // There are two methods of accessing global variables. 1) extern 2) colons.
    {
        extern int val; // 1) accessing global variable using extern.
        cout << "Value of global x (using extern) is :" << val<<endl;
    }
    cout << "Value of global x (using ::) is : " << ::val; // 2) accessing global variable with two colons.

    return 0;
}
