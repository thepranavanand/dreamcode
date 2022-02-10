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