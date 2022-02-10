#include <stdio.h>
#include <math.h>

double findSQRT(double a) { return sqrt(a); }

int main()

{

    int x , y, z;

    long int fact = 1;

    printf("\nenter the number : ");

    scanf("%d", &x);

    printf("\n1. Even or Odd");

    printf("\n2. Positive or Negative");

    printf("\n3. square");

    printf("\nEnter choice = ");

    scanf("%d", &z);

    switch (z)
    {
    case 1:
        if (x % 2 == 0)
        {
            printf("\n%d is EVEN ", x);
        }
        else
        {
            printf("\n%d is ODD ", x);
        }
        break;

    case 2:
        if (x >= 0)
        {
            printf("\n%d is a positive number", x);
        }
        else
        {
            printf("\n%d is a negative number", x);
        }
        break;

    case 3:
        printf("Square of given number is : %d", x * x);
        break;
    }
    return 0;
}