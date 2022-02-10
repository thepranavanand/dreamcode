#include <stdio.h>
int getPositive();

int main()
{
    getPositive();
    return 0;
}

int getPositive(int a)
{
    do
    {
        scanf("%d", &a);
    } while (a < 1);
    for(int i = 0; i<a; i++)
    {
        printf("?");
    }
}