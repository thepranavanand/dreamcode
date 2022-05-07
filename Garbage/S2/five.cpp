#include <iostream>
using namespace std;
int main()

{
    int n, z, first = 0, second = 1, next;
    int a[20], i, j = 0, count = 0;
    cout << "Enter the number of terms of fibonacci series :\n";
    cin >> n;
    cout << "Terms of Fibonacci series of given data is :" << endl;
    for (z = 0; z < n; z++)
    {
        if (z <= 1)
            next = z;
        else
        {
            next = first + second;
            first = second;
            second = next;
        }
        cout << next << endl;
        if (next - first > 1)
        {
            for (i = first + 1; i < next; i++)
            {
                a[j] = i;
                count++;
                j++;
            }
        }
    }
    cout << "Missing numbers of the Fibonacci series are :" << endl;
    for (j = 0; j < count; j++)
        cout << a[j] << endl;
    return 0;
}