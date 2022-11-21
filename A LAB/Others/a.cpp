#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() 
{
    int z = 0;
    string name[] = {"apple", "Abignale", "hello"};

    sort(begin(name),end(name));

    for(auto n: name){
         cout << n << endl;
    }
    return 0;    
}