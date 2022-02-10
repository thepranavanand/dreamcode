#include<iostream>
using namespace std;

typedef struct founder
{
    /* data */
    int eId;
    char favChar;
    float valuation;
} foundr;

union money
{
    /* data */
    int rice;
    char car;
    float pounds;
};


int main(){

    enum Meal{breakfast,lunch,dinner};
    Meal  m1 = breakfast;
    cout<<m1<<endl;
    Meal m2 = dinner;
    cout<<(m2==2)<<endl;
    cout<<(m2==1);
    // above the value of output is coming in bool.
    // cout<<breakfast;
    // cout<<lunch;
    // cout<<dinner;

    // foundr pranav; // we can also use struct founder before writing Pranav. Also if we use this, there is no need of typedef.
    // pranav.eId = 1;
    // pranav.favChar = 'c';
    // pranav.valuation = 10000000;
    // cout<<"The value is "<<pranav.eId<<endl;
    // cout<<"The value is "<<pranav.favChar<<endl;
    // cout<<"The value is "<<pranav.valuation<<endl;

    // union money m1;

    // case 1 : here, we have simply assgned the value of rice and got the output.
    // m1.rice = 34;
    // cout<<m1.rice;

    // case 2 : here, garbage value of rice is being shown  because of overloading.
    // m1.rice = 34;
    // m1.car = 'c';
    // cout<<m1.rice;

    // case 3 : here, it is shown how after case 2 : we got the output of char.
    // m1.rice = 34;
    // m1.car = 'c';
    // cout<<m1.car;


    
    return 0;
}