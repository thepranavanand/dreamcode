#include <iostream>
using namespace std;

void func(int n[], int N)
{
    n[0] = 10;
    n[1] = 9;
}
void func1(int N)
{
    N = 120;
}

int main()
{
    int N = 2;
    int n[2] = {1, 7};
    cout << "Before function call: " << n[0] << " " << n[1] << endl;
    func(n, N);
    cout << "After function call: " << n[0] << " " << n[1] <<endl;
    func1(N);
    cout << "Value of N after function call: " << N << endl;
    cout << "\nThis means value of elements of array gets updated in main too if updated inside a function but value of variable doesn't get affected because in case of variable, a copy is made inside the function while in case of array, value changes as base address is passed, not the value unlike variable.\n\nSimply, in case of variable, value is called but in case of array, reference is called\n\n";
    return 0;
}

