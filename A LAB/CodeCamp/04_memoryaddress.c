#include<stdio.h>
#include<stdlib.h>
int main (){
    int age = 20;
    double gpa = 3.4;
    char grade = 'A';
    int * pAge = &age;
    printf("Value of pAge is : %d\n",*pAge);
    printf("age : %p\ngpa = %p\ngrade = %p",&age); //p stands for pointer.
    return 0;
}