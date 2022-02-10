#include <stdio.h>
#include<math.h>

int main()
{
    int a, b;
    printf("Enter the first value : ");
    scanf("%d", &a);
    printf("Enter the second value : ");
    scanf("%d", &b);
    printf("Greater value : %d\n", a > b);
    printf("Smaller value : %d\n", a < b);
    printf("Greater than Equal to : %d\n", a >= b);
    printf("Smaller than Equal to : %d\n", a <= b);
    printf("Equal Value : %d\n", a == b);
    printf("Power : %f\n",pow(a,b));

    // Both these operators are same :
    // printf("Not Equal to Value : %d\n", a != b);
    // printf("Not Operator value : %d\n", (!(a==b)));

    printf("Not Equal to Value : %d\n", a != b);
    printf("Not Operator value : %d\n", (!(a==b)));
    return 0;
}