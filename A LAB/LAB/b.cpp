#include<iostream>
using namespace std;
void fibonacci(int a, int b, int count){
    cout << b<< " ";
    if(count<=10)
        fibonacci(b, a+b, ++count);
}
int main(){
    cout << 0<<" ";
    fibonacci(0,1,0);
}