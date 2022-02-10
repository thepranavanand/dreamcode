#include<iostream>
#include<string>
using namespace std;

class myclass{
    protected:
    int num1;
    void HelloW(){
        cout<<"Hello, World!";
    }
};

class anotherclass: public myclass{
    public:
    void setfun(int n){
        HelloW();
        num1 = n;
    }
    int getfun(){
        return num1;
    }
};

int main (){
    anotherclass myobj;
    myobj.setfun(5000);
    cout<<"\n"<<myobj.getfun()<<"\n";
}