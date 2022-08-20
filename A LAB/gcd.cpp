#include<iostream>
using namespace std;

int main (){
    int num1, num2, result, N;
    cout << "Enter two numbers to find the GCD:\n";
    cin >> num1 >> num2;
    result = min(num1, num2)/2;
    while (result > 0) {
        if (num1 % result == 0 && num2 % result == 0) {
            break;
        }
        result--;
    }
    cout << "GCD of given numbers is: " << result << endl;
}