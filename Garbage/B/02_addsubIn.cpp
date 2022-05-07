#include <iostream>
using namespace std;
class calc
{
private:
    int a, b, c;
    float num1, num2, num3;

public:
    void input();
    void sum();
    void diff();
    void disp();
};

inline void calc::input()

{
    cout << "Enter two integers:\n";
    cin >> a >> b;
    cout << "\nEnter two float-type numbers :\n";
    cin >> num1 >> num2;
}

inline void calc::sum()
{
    c = a + b;
    num3 = num1 + num2;
}

inline void calc::diff()
{
    c = a - b;
    num3 = num1 - num2;
}

inline void calc::disp()
{
    cout << "\nSum of given integers is :\n" << c << endl;
    cout << "\nSum of given float number is :\n" << num2 << endl;
    cout << "\nDifference of given integers is :\n" << c << endl;
    cout << "\nDifference of given float numbers is :\n" << num2 << endl;
}

int main()
{
    calc obj;
    obj.input();
    obj.sum();
    obj.diff();
    obj.disp();
    return 0;
}
