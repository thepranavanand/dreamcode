#include <iostream>
using namespace std;
 
class Number
{
    private:
    int num;
    public:
    Number(){ num=0; };
    void inputNumber (void)
    {
        cout<<"Enter an integer number: ";
        cin>>num;
    }
    void displayNumber()
    {
    cout<<"Num: "<<num<<endl;
    }
};
 
int main()
{
    cout<<"Anjil Chaudhary"<<endl;
    cout<<"UID: 21BCS7371"<<endl;
    cout<<"\n\n"<<endl;
    Number N;
    N.inputNumber();
    N.displayNumber();
    Number *ptrN;
    ptrN = new Number;
    cout<<"Default value... "<<endl;
    ptrN->displayNumber();
    ptrN->inputNumber();
    ptrN->displayNumber();
    return 0;
}
