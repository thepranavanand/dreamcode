#include<bits/stdc++.h>
using namespace std;
int main(){
    unordered_set<int> m;
    m.insert(4);
    m.insert(5);
    m.insert(5);
    if(m.find(2)!=m.end()){
        cout << "found";
    } else {
        cout << "not found";
    }
}