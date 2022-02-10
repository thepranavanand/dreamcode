#include<iostream>
using namespace std;

class car { //datatype
    public:
    int model; //attribute
    int year;

    }
};
    
int main ()
{
    car ferrari;
    ferrari.model = 37;
    ferrari.year = 1977;
    cout<<ferrari.model<<ferrari.year;

    car bmw;
    return 0;
}
