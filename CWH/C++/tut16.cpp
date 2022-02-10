#include<iostream>
using namespace std;

int sum (int a, int b){
    int c = a + b;
    return c;
}

// This will not swap a and b.
/*void swap(int a, int b){       // temp  a  b
    int temp = a;              //  4    4  5
    a = b;                     //  4    5  5
    b = temp;                  //  4    5  4
}    */

// Call by reference using pointers.
/* void swapPointer(int* a, int* b){     // temp  a  b
    int temp = *a;                       //  4    4  5
    *a = *b;                             //  4    5  5
    *b = temp;                           //  4    5  4
}*/

// Call by reference using C++ reference variables.
 void swapReferenceVar(int &a, int &b){      // temp  a  b
    int temp = a;                           //  4    4  5
    a = b;                                  //  4    5  5
    b = temp;                               //  4    5  4
}

/* int & swapReferenceVar(int &a, int &b){  // temp  a  b
    int temp = a;                           //  4    4  5
    a = b;                                  //  4    5  5
    b = temp;                               //  4    5  4
    return a;
}*/

int main(){
    //int x = 4, y = 5;
    // cout<<"The sum of 4 and 5 is "<<sum(4,5);
    /* swap(x,y); // This will not swap a and y.
    cout<<"The value of x is "<<x<<" and the value of y is "<<y<<endl;
    swapPointer(&x,&y); // This will swap a and y using pointers.
    cout<<"The value of x is "<<x<<" and the value of y is "<<y<<endl;
    swapReferenceVar(x,y);
    cout<<"The value of x is "<<x<<" and the value of y is "<<y<<endl; */

    // ** These can also be written like this : **/

    int a = 4, b = 5;
    // cout<<"The sum of 4 and 5 is "<<sum(4,5);
    // swap(a,b); // This will not swap a and b.
    cout<<"The value of a is "<<a<<" and the value of b is "<<b<<endl;
    // swapPointer(&a,&b); // This will swap a and b using pointers.
    // cout<<"The value of a is "<<a<<" and the value of b is "<<b<<endl;
    swapReferenceVar(a,b);
    // swapReferenceVar (a,b) = 786;
    cout<<"The value of a is "<<a<<" and the value of b is "<<b<<endl;

    return 0;
}