#include<iostream>
using namespace std;
void decl(int num1, string str1 = "kuchh to likh lwde"){
    cout<<num1<<endl<<str1<<endl;
}
int main (){
    decl(5);
    decl(5,"Hehehe");
    return 0;
}