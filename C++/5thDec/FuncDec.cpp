#include<iostream>
using namespace std;
int forest(int num1, int num2){
    return num1+num2;
}
string forest (string str1, string str2){
    return str1 + str2;
}
int main (){
    int Forest1 = forest(2,3);
    string Forest2 = forest("Hello","There");
    cout<<"Sum is : "<<Forest1<<endl;
    cout<<Forest2;

    return 0;
}