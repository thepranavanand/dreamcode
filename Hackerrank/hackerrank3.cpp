/** Input Format **

Input consists of the following space-separated values: int, long, char, float, and double, respectively.

** Output Format **

Print each element on a new line in the same order it was received as input. Note that the floating point value should be correct up to 3 decimal places and the double to 9 decimal places.

** Sample Input **

3
12345678912345
a
334.23
14049.30493

** Sample Output **

3
12345678912345
a
334.230
14049.304930000*/

#include <iostream>
#include <cstdio>
#include <iomanip>
using namespace std;

int main()
{
    int integer;
    long long1;
    char letter;
    float floatnumber;
    double doublenumber;
    cin >> letter;
    cin >> integer;
    cin >> long1;
    cin >> floatnumber;
    cin >> doublenumber;
    cout << setprecision(20) << integer << endl;
    cout << setprecision(20) << long1 << endl;
    cout << setprecision(20) << letter << endl;
    cout << setprecision(20) << floatnumber << endl;
    cout << setprecision(20) << doublenumber << endl;
    return 0;
}