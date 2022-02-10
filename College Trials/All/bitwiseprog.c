#include <stdio.h>

int main()
{
    int a, b;
    printf("Enter the values of a and b\n");
    scanf("%d %d", &a, &b);
    printf("%d&%d is %d\n", a, b, a & b);
    printf("%d|%d is %d\n", a, b, a | b);
    printf("%d^%d is %d\n", a, b, a ^ b);
    printf("~%d is %d\n", a, ~a);
    printf("~%d is %d\n", b, ~b);
    printf("%d<<4 is %d\n", a, a << 4);
    printf("%d>>6 is %d\n", a, a >> 6);
    return 0;
}   