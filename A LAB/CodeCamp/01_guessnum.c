#include <stdio.h>
int main()
{
    int secretnum = 7;
    int guess;
    int guesslimit = 3;
    int iguess = 0;

    while (guess != secretnum && iguess < guesslimit)
    {
        scanf("%d", &guess);
        iguess++;
    }
    if (iguess == guesslimit)
    {
        printf("Out of guesses");
    }
    else
    {
        printf("You win");
    }
    return 0;
}