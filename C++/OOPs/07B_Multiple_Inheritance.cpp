#include<iostream>
#include<string>
using namespace std;

class myclass{
    public:
    string carnage;
};

class yourclass{
    public:
    string venom;
};

class ourclass: public myclass, public yourclass{
    public:
    string okish;
};

int main(){
    ourclass myobj;
    myobj.carnage = "Venom";
    myobj.venom = "Carnage";
    myobj.okish = "Is Great";
    cout<<"\n"<<myobj.carnage<<" "<<myobj.venom<<" "<<myobj.okish<<"\n\n";
    return 0;
}