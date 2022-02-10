#include <stdio.h>
#include <conio.h>
char global[200];
int main()
{
    printf("Enter your name :");
    fgets(global, 50, stdin);
    fputs(global, stdout);
    // printf("%s",global);
    return 0;
}
// a boilerplate is a unit of writing that can be reused over and over without change.