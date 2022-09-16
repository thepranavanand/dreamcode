#include<iostream>
#include<sstream>

int main (){
    int count = 0;
    std::string input;
    getline(std::cin, input);
    std::stringstream s(input);
    while(s>>input){
        count++;
    }
    std::cout << count << std::endl;
}