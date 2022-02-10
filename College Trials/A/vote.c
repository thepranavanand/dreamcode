#include <stdio.h>

int main()
{
    int age;

    printf("Enter age : \n");
    scanf("%d", &age);
    (age >= 18) ? printf("You are eigible for voting") : printf("You are not eligible for voting");

return 0;
}