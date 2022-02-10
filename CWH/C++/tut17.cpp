#include<iostream>
using namespace std;


inline int s(int a,int b){
    return a*b;
}

int main(){
    int a,b;
    cout<<"Enter two numbers"<<endl;
    cin>>a>>b;
    cout<<s(a,b); 
    return 0;
// * recursions