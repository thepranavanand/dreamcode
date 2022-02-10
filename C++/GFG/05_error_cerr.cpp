// C++ program to illustrate std::cerr
  
#include <iostream>
using namespace std;
  
// Driver Code
int main()
{
  
    // This will print "Welcome to GFG"
    // in the error window
    cerr << "Welcome to GfG! :: cerr"<<endl;
  
    // This will print "Welcome to GfG"
    // in the output window
    cout << "Welcome to GfG! :: cout";
    return 0;
}

// https://practice.geeksforgeeks.org/tracks/module-1-basics-and-control-structures/?batchId=113&tab=1 
// look for buffered and unbuffered standard error stream