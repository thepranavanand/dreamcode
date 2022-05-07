#include <stdio.h>
void findFact(int, int *);
int main()
{
    int fact;
    int num1;
    printf("Enter a number : \n");
    scanf("%d", &num1);
    findFact(num1, &fact);
    printf("The Factorial of number entered i.e. %d is : \n%d\n", num1, fact);
    return 0;
}

void findFact(int n, int *f)
{
    int i;
    *f = 1;
    for (i = 1; i <= n; i++)
        *f = *f * i;
}