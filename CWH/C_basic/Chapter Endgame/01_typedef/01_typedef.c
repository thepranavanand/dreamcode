// typedef <previous name> <alias name>
// One of the most important use of typedef is in part 4.
// We can use typedef in struct to save time as :

#include<stdio.h>
#include<string.h>

int main()
{
    typedef double db;
    db forest = 48.48;
    printf("Value of double forest = %lf\n", forest);

    //This due to some reason doesn't work in this compiler. :
    // typedef long double ld;
    // ld frost = 3.14e+2;
    // printf("Value of long double frost = %Lf\n",frost); 
    return 0;
}

// using typedef in struct in part 2 and 3 :