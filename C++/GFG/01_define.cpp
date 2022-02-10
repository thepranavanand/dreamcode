// https://www.geeksforgeeks.org/cc-preprocessors/

#include<iostream>
using namespace std;

#define area(l,b) (l*b) // means whenever something will be written in format (l,b), that will convert into value l*b.
#define x 5
#define CODING "An absolute pleasure"
int main (){
    int l1 = 5, l2 = 8, AREA;
    AREA = area(l1,l2);
    cout<<AREA<<endl;

    #ifdef x // this means if x is defined previously in the code then only print the below mentioned statement.
    cout<<"Yess"<<endl;
    #endif

#undef x // this undefines x.

    #ifdef x
    cout<<"Yess"<<endl; // this "Yess will not be printed as x was undefined in line 18."
    #endif

    #ifdef CODING 
    cout<<CODING;
    #endif

    return 0;

}