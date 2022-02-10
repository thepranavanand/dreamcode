#include<iostream>
using namespace std;

int c = 98;

int main(){

    /*  cout<<"All the codes are converted to comments and 
    each set of one type of topic is grouped using multiple line comment.";*/

    // ******* BUILT-IN DATATYPES *******

    /* int a, b, c;

    cout<<"Enter the value of a :"<<endl;
    cin>>a;
    cout<<"Enter the value of b :"<<endl;
    cin>>b;

    c = a+b;

    cout<<"The sum is :"<<c<<endl;

    cout<<"The global sum is "<<::c;
    :: is called scope resolution operator used for including global data. */

    //  ****** FlOAT, DOUBLE AND LONG DOUBLE LITERALS ******
    float d=34.4f;
    /*here we have written d = 34.3 . But compiler detects 34.4 as a double not a float.
    So for the compiler to detect it as a float,
    we'll add 'f/F' after the decimal number as : d = 34.4f/F .*/
    long double e=34.4l;
    /*here compiler detects 'e' as long double, but still for the confirmation,
    we'll add 'l/L' here as  e = 34.4l/L .
    or sometimes we have to send the information about the datatype, 
    that's why we add them everytime .*/

    cout<<"The size of 34.4 is "<<sizeof(34.4)<<endl;
    cout<<"The size of 34.4f is "<<sizeof(34.4f)<<endl;
    cout<<"The size of 34.4F is "<<sizeof(34.4F)<<endl;
    cout<<"The size of 34.4l is "<<sizeof(34.4l)<<endl;
    cout<<"The size of 34.4L is "<<sizeof(34.4L)<<endl;
    cout<<"The value of d is :"<<d<<endl<<"The value of e is :"<<e<<endl;

    // ****** REFERENCE VARIABLES ******
    // Basically, just like a person has various names but they all refer to him only, we can refer different names to same values like :

    float x = 455;
    float &y = x;
    cout<<x<<endl;
    cout<<y<<endl;

    // ****** TYPECASTING ******
    // In typecasting, we can mention datatypes and they'll be converted to whatever we write.
    // As below, we have given b = 45.46, but we wrote cout<<"The value of b is :"<<(int)b; and we got 45 not 45.46 coz mentioning int.
    // We can mnention it in two ways : e.g.     1) <<(float)a;      2) <<float(a);

    /*int a = 45;
    float b = 45.46;
    cout<<"The value of a is :"<<(float)a<<endl;
    cout<<"The value of b is :"<<int(b)<<endl;
    cout<<"The value of b is :"<<(float)b<<endl;
    int c = int(b);
    cout<<"The value of c is :"<<c<<endl;

    cout<<"The expression is "<<a+b<<endl;
    cout<<"The expression is "<<a+(int)b<<endl;
    cout<<"The expression is "<<a+int(b)<<endl;*/

    // Just like above, we can convert float to double and vice-versa (if possible).


    return 0;

}