#include <iostream>
using namespace std;

class one
{
public:
    int obj1;
    virtual void show()
    {
        cout << "one" << endl;
    }
};
class two : public one
{
public:
    int obj2;
    virtual void one()
    {
        cout << "two" << endl;
    }
    void display()
    {
        one::show();
    }
};
class three : public one
{
public:
    int obj3;
    virtual void one()
    {
        cout << "three" << endl;
    }
};
class four : public two, public three
{
public:
    int obj4;
    void show()
    {
        two::display();
        two::one();
        three::one();
        cout << "four" << endl;
    }
};
int main()
{
    four four1;
    four1.show();
    return 0;
}