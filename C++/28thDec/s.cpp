#include <iostream>
using namespace std;
 
class stud 
{
    public:
    stud()
    {
        cout<< "Constructor Used" <<endl;
    }
    ~stud()
    {
        cout<< "Destructor Used" <<endl;
    }
};
 
int main()
{
    cout<<"Amarkant"<<endl;
    cout<<"UID: 21BCS7631"<<endl;
    stud* S = new stud[6];
    delete[] S;
}
