// using stl
#include<iostream>
#include<stack>
using namespace std;

int main (){
    stack<int> s;
    s.push(2);
    s.push(5);
    s.pop();
    s.pop();
    cout << s.top();
    cout << s.empty();
}