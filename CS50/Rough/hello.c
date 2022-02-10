#include <stdio.h>
int i, sum = 0;
int main()
{
    for (i = 105; i < 200; i += 5)
    {
        if(i % 5 == 0)
        {
            sum = sum + i;
        }
    }
    printf("%d", sum);
    return 0;
}