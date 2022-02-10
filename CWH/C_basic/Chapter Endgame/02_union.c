#include<stdio.h>
#include<string.h>

union Student {
    char name[30];
    int id;
    int marks;
};

int main (){
    typedef union Student unst;
    unst s1;
    s1.id = 39;
    s1.marks = 100;
    strcpy(s1.name, "Pranav");
    printf("%s %d %d",s1.name, s1.id, s1.marks);
    return 0;
}