#include <stdio.h>
void meow(int);
int main()
{
    meow(3);
}
void meow(int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("meow\n");
    }
}