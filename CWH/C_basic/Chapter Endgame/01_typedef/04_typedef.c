#include<stdio.h>
#include<string.h>

int main (){
    int c = 77;
    // int *a, b; // This means int *a and int b. 
    // But if we want to mention int* just one time for multiple variables, it is possible with typedef.
    typedef int* intptr;
    intptr a, b;
    a = &c;
    b = a;
    printf("a is : %d and b is : %d",*a,*b);
    return 0;
}