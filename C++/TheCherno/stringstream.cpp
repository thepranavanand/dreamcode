#include<iostream>
#include<sstream>

int main (){
    std::string input;
    getline(std::cin, input);
    std::stringstream ss(input);
    while(ss.good()){
        std::string token;
        ss >> token;

        std::cout << token << std::endl;
    }
}