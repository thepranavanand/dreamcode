#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct Student //new datatype student has been created.
{
    int ID;
    int marks;
    char fav_char[100]; // char *fav_char this worked too. how???
} S1; //If we declare this datatype here, we don't need to do this again in line no. 12 

int main (){

    // struct Student S1;

    // We can use either this :
    // S1.ID = 89; // (.) is called structure member operator.
    // S1.marks = 100;
    // strcpy(S1.fav_char,"Hulk"); /* IMPORTANT */for assigning value to string, we use strcpy here.

    // Or instead of initializing variables one by one, we can initialize all of them at once as :
    struct Student S1 = {89, 100, "Hulk"};
    printf("%d %d %s",S1.ID, S1.marks, S1.fav_char);
    return 0;
}