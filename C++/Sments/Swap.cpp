#include<iostream>
using namespace std;
void forest (int &a, int &b){
    int c = a;
    a = b;
    b = c;
}
int main (){
    int num1 = 8;
    int num2 = 6;
    cout<<"normal  : "<<num1<<num2<<endl;
    forest (num1, num2);
    cout<<"swapped : "<<num1<<num2;
}