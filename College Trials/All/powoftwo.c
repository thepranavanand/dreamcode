#include <stdio.h>

int main()
{
    int a, b, c;

    printf("Enter an integer number: ");
    scanf("%d", &a);

    b = a;
    while (b != 1)
    {
        if (b % 2 != 0)
        {
            c = 1;
            break;
        }

        b = b / 2;
    }

    (c == 0) ? printf("%d is a number that is the power of 2.", a) : printf("%d is not the power of 2.", a);
    
    return 0;
}