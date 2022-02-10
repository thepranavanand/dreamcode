#include<iostream>
using namespace std;

// Function prototypes
// type function-name (arguments);
// int sum(int a,int b); //--> acceptable
// int sum(int a,b); //--> not acceptable
int sum(int, int); //--> acceptable
void g(void); // --> Acceptable
// void g(); // --> Acceptable

int main(){
    int num1, num2;
    cout<<"Enter first number"<<endl;
    cin>>num1;
    cout<<"Enter second number"<<endl;
    cin>>num2;
    // num1 and num 2 are actual parameters
    cout<<"The sum is  "<<sum(num1, num2);
    g();
    return 0;
}

int sum(int a, int b){
    // Formal Parameters a and b will be taking values from actual paarameters num1 and num2.
    int c=a+b;
    return c;
}

void g(){
    cout<<"\nVoid Test";
}