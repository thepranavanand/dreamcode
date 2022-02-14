// *********** IMPORTANT NOTES ON REFERENCES BELOW *********** //

#include<iostream>
#define LOG(a) std::cout<<a<<std::endl;
int main ()
{
    //References are basically an alias.
    // Below are references :
    int a = 8;
    int& ref = a; 

    LOG("\nThese are memory addresses of a:");
    LOG(&ref);
    LOG(&a);
    LOG("\nThis is the value of a :");
    LOG(ref);

    //Below is pointer
    int b = 7;
    int *ptr = &b;
    LOG("\nThis is the memory address of b:")
    LOG(ptr);
    LOG("\nThis is the value of b:")
    LOG(*ptr);
    return 0;
}

/***

#NOTE_1) Here, ref is an alias to a. There are not two separate variables a and ref here. Its just a and an alias to a that is ref.

#NOTE_2) Because of this, we can't reassign a value of some other variable to the reference.

    int a = 9;
    int b = 2;
    int& ref = a;
    ref = b;  // We can't do this. 
    
#NOTE_3) Also you can't just declare a reference. It has to be initialized. But you can reassign any other variable to the pointer as :

    int a = 9;
    int b = 3;
    int *ptr = &a;
    *ptr = 10;
    ptr = &b;
    *ptr = 1;

    LOG(a); // This will give 10
    LOG(b); // This will give 1
***/