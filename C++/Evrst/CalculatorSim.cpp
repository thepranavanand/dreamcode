#include <iostream>
#include <conio.h>

using namespace std;

class Rational
{
private:
    float numInput;

public:
    Rational() : numInput(0)
    {
    }

    void getValues()
    {
        cout << "Enter number: ";
        cin >> numInput;
    }

    void showValues()
    {
        cout << numInput << endl;
    }

    Rational operator+(Rational) const;
    Rational operator-(Rational) const;
    Rational operator*(Rational) const;
    Rational operator/(Rational) const;
};

Rational Rational::operator+(Rational arg2) const
{
    Rational temp;
    temp.numInput = numInput + arg2.numInput;
    return temp;
}

Rational Rational::operator-(Rational arg2) const
{
    Rational temp;
    temp.numInput = numInput - arg2.numInput;
    return temp;
}

Rational Rational::operator*(Rational arg2) const
{
    Rational temp;
    temp.numInput = numInput * arg2.numInput;
    return temp;
}

Rational Rational::operator/(Rational arg2) const
{
    Rational temp;
    temp.numInput = numInput / arg2.numInput;
    return temp;
}

int main()
{
    Rational mathOb1, mathOb2, outputOb;
    int choice;
    mathOb1.getValues();
    cout << "First number entered: ";
    mathOb1.showValues();
    cout << endl;
    cout << "Enter operator: + = 1, - = 2, * = 3, / = 4  ";
    cin >> choice;
    cout << endl;
    mathOb2.getValues();
    cout << "Second number entered: ";
    mathOb2.showValues();
    cout << endl;

    switch (choice)
    {
    case 1:
        outputOb = mathOb1 + mathOb2;
        break;
    case 2:
        outputOb = mathOb1 - mathOb2;
        break;
    case 3:
        outputOb = mathOb1 * mathOb2;
        break;
    case 4:
        outputOb = mathOb1 / mathOb2;
        break;
    default:
        cout << "Invalid choice! " << endl;
    }
    cout << "Answer: ";
    outputOb.showValues();
    cout << endl;

    return 0;
}