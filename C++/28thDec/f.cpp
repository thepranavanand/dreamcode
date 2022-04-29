#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    cout << "Pranav Anand" << endl;
    cout << "UID: 21BCS7719" << endl;
    int sum = 0, N;
    cout << "Enter number of students in Class:\n";
    cin >> N;
    int *a = new int[N];
    cout << "Enter the marks of given " << N << " students: " << endl;
    for (int i = 0; i < N; i++)
        cin >> a[i];
    cout << "Entered Marks: " << endl;
    for (int i = 0; i < N; i++)
    {
        cout << a[i] << endl;
        sum = sum + a[i];
    }
    cout << "Total Sum: " << sum;
    delete (a);
    getch();
}