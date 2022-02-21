#include<iostream>
using namespace std;
int num1 = 7;
int main ()
{
    int num1 = 9;
    cout <<"Global variable : " << num1 << endl;
    cout <<"Local Variable : " << ::num1 << endl;
    return 0;
}