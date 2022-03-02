#include <iostream>
using namespace std;
class square
{
private:
    int a, b;
    float num1, num2;

public:
    void input();
    void calc();
    void disp();
};

inline void square::input()

{
    cout << "Enter an integer:\n";
    cin >> a;
    cout << "\nEnter a float-type number :\n";
    cin >> num1;
}

inline void square::calc()
{
    b = a * a;
    num2 = num1 * num1;
}
inline void square::disp()
{
    cout << "\nSquare of given integer is :" << b << endl;
    cout << "\nSquare of given float number is :\n" << num2 << endl;
}

int main()
{
    square s;
    s.input();
    s.calc();
    s.disp();
    return 0;
}
