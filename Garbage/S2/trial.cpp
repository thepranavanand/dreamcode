#include <iostream>
using namespace std;

class Trl
{
public:
    int reverse(int n)
    {
        int r, temp = 0;
        while (n > 0)
        {
            r = n % 10;
            temp = temp * 10 + r;
            n = n / 10;
        }
        return temp;
    }
};

int main()
{
    Trl obj1;
    int num1, rev;
    cout << "Enter a number :\n";
    cin >> num1;
    cout << "After reverse :\n" << obj1.reverse(num1);
    return 0;
}

/*
#include<iostream>

using namespace std;



class rev

{

    private:

            int n,n1,rn=0,d;

    public:

        void input();

        void calc();

        void display();

};



void rev::input()

{

    cout<<"\nEnter any positive no. :: ";

    cin>>n;//234

}



void rev::calc()

{

    n1=n;//n1=234

    while(n>0)//0>0

    {

        d=n%10;//d=2

        rn=(rn*10)+d;//rn=(43*10)+2=432

        n/=10;//n=2/10=>0



    }

}



void rev::display()

{

        cout<<"\nReverse of [ "<<n1<<" ] is :: "<<rn<<"\n";//432 234

}



int main ()

{

    rev r;

    r.input();

    r.calc();

    r.display();



    return 0;



}
**/

/**
 * 
**/