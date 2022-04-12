#include<iostream>
using namespace std;
 
class Records
{
    int age;
    string name;
    public:
    Records() {};
    Records(string n,int a): name(n),age(a) {}
    void show()
    {
        cout<<name<<" : "<<age<<endl;
    }
    Records eldest(Records o)
    {
        return (o.age>age)? o: *this;
    }
};
 
int main()
{  
    cout<<"Anjil Chaudhary"<<endl;
    cout<<"UID: 21BCS7371"<<endl;
    cout<<"\n\n"<<endl;
    Records ob[3]={Records("Ani",21),Records("Arka",50),Records("Ram",30)};
    Records res;
    for(int i=0;i<2;i++)
    res = ob[i].eldest(ob[i+1]);
    res.show();
    return 0;  
}

