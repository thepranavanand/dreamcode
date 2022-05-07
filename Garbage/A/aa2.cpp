#include <iostream>
using namespace std;

class complex
{
private:
    float real;
    float img;

public:
    void set(float tReal, float tImg)
    {
        real = tReal;
        img = tImg;
    }
    complex sum(complex c)
    {
        complex t;
        t.real = real + c.real;
        t.img = img + c.img;
        return t;
    }
    void disp()
    {
        if (img == -1)
        {
            cout << real << " + -i" << endl;
        }
        else if (img == 1)
        {
            cout << real << " + i" << endl;
        }
        else if (img == 0)
        {
            cout << real << endl;
        }
        else
        {
            cout << real << " + " << img << "i" << endl;
        }
    }
};

int main()
{
    cout << "Pranav Anand" << endl;
    cout << "UID: 21BCS7719\n"
         << endl;
    complex c1, c2, c3;
    c1.set(2.5, 3.5);
    c2.set(1.5, 5.5);
    c3 = c1.sum(c2);
    cout << "Complex Number 1 : \n";
    c1.disp();
    cout << "Complex Number 2 : \n";
    c2.disp();
    cout << "Addition of complex number 1 and 2 is : \n";
    c3.disp();
    return 0;
}
