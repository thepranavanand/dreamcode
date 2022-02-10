// function declaration :

// 1)

#include <stdio.h>

int sum(); // function declaration

int main(){
    int sum(); // function declaration
    printf("bootcamp");
    printf("%d", sum()); // fun. cal // return will refer here//25
    return 0;
}   

int sum() // func. def
{
    int a, b;
    printf("\nenter values : ");
    scanf("%d %d", &a, &b);
    int sum = a + b;

    return sum; // 25
}    

// 2)

#include <stdio.h>
void sum(); // function declaration

int main(){
    printf("bootcamp\n");
    sum(); // fun. cal
    return 0;
}
void sum() // func. def
{
    int a, b;
    printf("enter values : ");
    scanf("%d %d", &a, &b);
    int sum1 = a + b;
    printf("%d", sum1);
}



// 3)

#include <stdio.h>
void sum(); // function declaration
void sub(); // function declaration
int main()
{
    printf("bootcamp\n");
    sum(); // fun. cal
    sub();
    sum(); 
    return 0;
}
void sum() // func. def // void do noyt return
{
    int a, b;
    printf("enter values : \n");
    scanf("%d %d", &a, &b);
    int sum1 = a + b;
    printf("%d", sum1);
}
void sub() // func. def
{
    int a, b;
    printf("\nenter values : \n");
    scanf("%d %d", &a, &b);
    int sub1 = a - b;
    printf("%d\n", sub1);
}

// 4)

#include <stdio.h>
int sum(int a, int b); // function declaration

int main()
{
    printf("bootcamp\n");
    int a, b;
    printf("enter values : \n");
    scanf("%d %d", &a, &b);
    int z = sum(a, b); // fun. cal  // passing arguments
    printf("%d", z);
    return 0;
}
int sum(int a, int b) // func. def
{
    int sum1 = a + b;
    //printf("\n %d", sum1);
    return sum1;
}