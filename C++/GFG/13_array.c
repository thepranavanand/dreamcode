// In C, it is not a compiler error to initialize an array with more elements than the specified size.
#include <stdio.h>
int main()
{

    // Array declaration by initializing it 
    // with more elements than specified size.
    int arr[2] = { 10, 20, 30, 40, 50 };

    return 0;
}

// the above program compiles fine and shows just Warning.

