#include <iostream>
#include <climits>
using namespace std;

int main()
{
	for (int i = 0; i < INT_MAX; i++)
	{
		int n;
		cin >> n;
		cout << ~(n) << endl;
	}
}

// First we interchange all the binary digits of the given decimal digit.
// Then we find 1's complement of the interchanged binary (Which will be the original representation already)
// Finally we add 1 to the resulted binary. 
// Adding 1 to binary means the next binary sequence. Like for 5->101, adding 1 will result in 110->6.
// At the end, we use - sign before the found decimal number. 
// Because binary of a negative number is binary of the number -1.