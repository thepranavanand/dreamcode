/*
                          ****** Input Format ******

+ You will be given two positive integers, n1 and n2, where n1 < n2.

                          ****** Output Format ******

+ For each integer n in the inclusive interval :

+ If n <= 9, then print the English representation of it in lowercase. That is "one" for , "two" for , 
  and so on upto n2.
+ Else if n > 9 and it is an even number, then print "even".
+ Else if n > 9 and it is an odd number, then print "odd".
*/

#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int main(){
    
    int num1 , num2 ;
    cin >> num1 >> num2;
    string ball[9] = {"one","two","three","four","five","six","seven","eight","nine"};
    
for(int i = num1; i <= num2; i++ ){

if(i <= 9){
    cout << ball[i-1] << endl;
}else if(i%2==0){ // here "i%2==0" means the remainder of i divided by 2 should be equal to 0
    cout << "even" << endl;
}else{
    cout << "odd" << endl;
}

}   
    return 0;
}