#include <iostream>
using namespace std;

class oops
{
    int x, y;
    float num1, num2;
public:
    void input();
    void sum();
};

inline void oops :: input()
{
    cin>>x;
    cin>>y;
}
inline void oops :: display()
{
    cout << x+y;
}

int main()
{
    oops obj1;
    obj1.input();
    cout << obj1.sum();
    return 0;
}