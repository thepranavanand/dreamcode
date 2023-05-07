#include<bits/stdc++.h>
using namespace std;

int main (){
    unordered_map <int, int> m;
    m[5]=4;
    m[1]=11;
    m[3]=8;
    for(auto it=m.begin(); it!=m.end(); it++){
        cout << it->first << it->second<< endl;
    }  
}