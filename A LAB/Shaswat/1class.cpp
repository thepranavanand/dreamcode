#include <iostream>

using namespace std;

class data1
{
public:
    int no1;
    void show()
    {
        cout << "helloo" << endl;
    }
};
class data2
{
public:
    int no2;
    void show()
    {
        cout << "how are you" << endl;
    }
};

class data3 : public data1, public data2
{
public:
    int no3;
    void show()
    {
        data1::show();
        data2::show();
        cout << "i am fine" << endl;
    }
};

int main()
{
    data3 shaswat;
    shaswat.show();
    return 0;
}