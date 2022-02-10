#include <stdio.h>

int main()
{
    int a;
    printf("enter a number:\n");
    scanf("%d", &a);

    switch (a % 2)
    {
    case 0:
        switch (a > 50)
        {

        case 0:
            printf("%d is even and less than 50",a);
            break;

        case 1:
            printf("%d is even and greater than 50",a);
            break;
        }
        break;
    case 1:
        switch (a < 50)
        {
        case 0:
            printf("%d is odd and greater than 50",a);
            break;

        case 1:
            printf("%d is odd and less than 50",a);
        }
    }
    return 0;
}
