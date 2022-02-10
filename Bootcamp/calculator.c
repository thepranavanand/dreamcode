#include <stdio.h>

int main()
{
    int a, b, ch, loop = 0 ;
    do
    {
    printf("Enter the values : \n");
    scanf("%d %d", &a, &b);
    printf("Press\n1 to add\n2 to subtract\n3 to multiply\n4 to divide\n5 to modulo\n");
    scanf("%d", &ch);
    switch (ch)
    {
    case 1:
        printf("Sum is %d\n", a + b);
        break;
    case 2:
        printf("Diff is %d\n", a - b);
        break;
    case 3:
        printf("Multiplication is %d\n", a * b);
        break; 
    case 4:  
        printf("Division is %d\n", a / b);
        break;
    case 5:
        printf("Modulo is %d\n", a % b);
        break;
    default:
    printf("Invalid Input.");
    break;
    }
    } while (loop==0);
    return 0;
}   

