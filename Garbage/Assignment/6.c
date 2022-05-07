#include <stdio.h>
int main()
{
    int num1;
    printf("Enter n :\n");
    scanf("%d", &num1);
    int sum = (num1 * (num1 + 1)) / 2;
    printf("Sum of first %d natural numbers is = %d", num1, sum);
    return 0;
}