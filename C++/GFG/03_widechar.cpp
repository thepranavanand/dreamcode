// https://www.geeksforgeeks.org/wide-char-and-library-functions-in-c/


// An example C++ program to demonstrate use of wchar_t
#include <iostream>
using namespace std;
  
int main()
{
    // Just like the type for character constants is char, the type for wide character is wchar_t.

    wchar_t w  = L'A';
    // L is the prefix for wide character literals and wide-character string literals which tells the compiler that that the char or string is of type wide-char.

    cout << "Wide character value :: " << w << endl ;
    wcout << "Wide character is :: " << w << endl ;
    // wcout prints character whereas cout prints just the value
    cout << "Size of the wide char is :: " << sizeof(w);
    return 0;
}

/*
// creating string with widechar_t :
#include <iostream>
using namespace std;
  
int main()
{

    wchar_t waname[] = L"helloo" ;
    wcout << waname << endl;
  
    return 0;
}
*/