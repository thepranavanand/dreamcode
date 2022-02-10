#include<stdio.h>
#include<string.h>

struct Student 
{
    char name[30];
    int id;
    int marks;
};
int main ()
{
    typedef struct Student st;
    st s1;
    strcpy(s1.name, "Pranav");
    s1.id = "7719";
    s1.marks = 100;
    printf("%s %d %d",s1.name, s1.id, s1.marks);
    return 0;
}