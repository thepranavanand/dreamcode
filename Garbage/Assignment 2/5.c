#include <stdio.h>
int *findLarger(int *, int *);
void main()
{
    int num1 = 0;
    int num2 = 0;
    int *result;
    printf("Input the first number : \n");
    scanf("%d", &num1);
    printf("Input the second  number : \n");
    scanf("%d", &num2);

    result = findLarger(&num1, &num2);
    printf("The number %d is larger.", *result);
}

int *findLarger(int *n1, int *n2)
{
    if (*n1 > *n2)
        return n1;
    else
        return n2;
}