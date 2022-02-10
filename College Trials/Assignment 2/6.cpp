#include <stdio.h>

void print(int *a)
{
    printf("%d\n", *a);
}

int main()
{
    int x;
    printf("Enter a number\n");
    scanf("%d", &x);
    print(&x);
    return 0;
}