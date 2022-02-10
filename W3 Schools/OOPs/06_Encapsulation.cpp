#include<iostream>
using namespace std;

class myclass{
    private:
    int num1;

    public:
    void setfun(int n){
        num1 = n;
    }

    int getfun(){
        return num1;
    }
};

int main (){
    myclass myobj;
    myobj.setfun(3000);
    cout<<myobj.getfun();
    return 0;
}

