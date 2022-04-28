#include"iostream" //This is same as <iostream> 
#include"../forest.h" // Even when the header file is not present in the directory, but is present up one directory from this current file, we can easily use the header file by using "../"

// void LOG(const char* word)
// {
//     std::cout<<word<<std::endl;
// }
int main ()
{
    LOG("Hello World");
    // std::cin.get();
}