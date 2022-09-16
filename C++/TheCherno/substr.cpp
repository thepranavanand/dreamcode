#include <iostream>
#include <sstream>
int main()
{
    std::string input;
    getline(std::cin, input);
    std::stringstream ss(input);

    while (ss.good()){
        std::string token;
        ss >> token;
        std::string entryname = token.substr(3, 5); //Copy 5 characters of token (starting from position 3);

        //&token[1] or token.substr(3) can be used if we have to print until maximum characters available;
        
        std::cout << entryname << std::endl;
    }
}