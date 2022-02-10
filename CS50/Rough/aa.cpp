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
}else if(i%2==0){
    cout << "even" << endl;
}else{
    cout << "odd" << endl;
}

}
    return 0;
}