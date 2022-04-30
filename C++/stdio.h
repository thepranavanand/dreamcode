#pragma once // This means only include this file once within a single compilation
// We will get a duplicate error just like when you create two classes with same name.
#include<iostream>
void LOG(const char* word)
{
    std::cout<<word<<std::endl;
}