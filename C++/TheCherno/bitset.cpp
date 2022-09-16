#include<iostream>
#include<bitset>
int main (){
    int a = 0b101;
    int b = 0b10110;
    b <<= 4;
    int c = a|b;
    std::cout << std::bitset<8>(c) << std::endl;
}