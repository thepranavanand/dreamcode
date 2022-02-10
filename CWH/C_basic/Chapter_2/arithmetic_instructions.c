#include <stdio.h>
#include <math.h>

int main()
{
    int a = 4;
    int b = 8;
    printf("The value of a + b is : %d\n", a + b);
    printf("The value of a - b is : %d\n", a - b);
    printf("The value of a * b is : %d\n", a * b);
    printf("The value of a / b is : %d\n", a / b);

    int z;
    z = a * b;
    // While assigning ,
    // c = a*b [ Allowed ]
    // a*b = c [ Not Allowed ]
    printf("The value of z is : %d\n", z);

    printf("%d\n", 5 % 2);
    printf("%d\n", 5 % -2);
    printf("%d\n", -5 % 2);

    printf("The value of 4 to the power 5 is : %f\n", pow(2, 5));
    printf("The maximum of 4 vs 5 is : %f\n", fmax(2, 5));

    return 0;
}