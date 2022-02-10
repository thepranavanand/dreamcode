#include <stdio.h>
#include <math.h>

double findSQRT(double a) { return sqrt(a); }

int main()

{

    int a, d, choice;

    long int fact = 1;

    printf("\nEnter the number : ");

    scanf("%d", &a);

    printf("\n1. Even or Odd");

    printf("\n2. Positive or Negative");

    printf("\n3. square");

    printf("\n4. Root");

    printf("\n\nEnter choice => ");

    scanf("%d", &choice);

    switch (choice)

    {
    case 1:

        if (a % 2 == 0)
        {

            printf("\n%d is EVEN ", a);
        }
        else
        {

            printf("\n%d is ODD ", a);
        }

        break;

    case 2:

        if (a >= 0)
        {

            printf("\n%d is a positive number", a);
        }
        else
        {

            printf("\n%d is a negative number", a);
        }

        break;

    case 3:

        printf("Square of given number is : %d", a * a);

        break;

    case 4:

        printf("%f ", findSQRT(a));
        break;
    default:
        printf("Wrong output");
    }

    return 0;
}
