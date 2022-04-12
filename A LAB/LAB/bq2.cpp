#include <iostream>
using namespace std;
 
class Test 
{
    private:
    int num;
    public:
    Test() 
    {
        num = 0;
    }
    Test(int n) 
    {
        num = n;
    }
    void display() 
    {
        cout<< "Number is: " <<num<<endl;
    }
    Test operator++ () 
    {
        ++num;
        return Test(num);
    }
    Test operator++( int ) 
    {
        Test t(num);
        ++num;
        return t;
    }
 
};
 
int main() 
{
    cout<<"Pranav Anand"<<endl;
    cout<<"UID: 21BCS7719"<<endl;
    cout<<"\n\n"<<endl;
    Test T1(20), T2(40), T3;
    ++T1;
    T1.display();
    T2++;
    T2.display();
    T3.display();
    T3 = T2++;
    T2.display();
    T3.display();
    return 0;
 
}
