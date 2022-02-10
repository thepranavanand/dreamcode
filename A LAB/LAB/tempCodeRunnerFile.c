#include <stdio.h>
#include <conio.h>

char global[100];
int main()
{
    printf("Please Enter Text: \n");
    // fgets(global, 50, stdin); //It will take Maximum 50 chars. So no buffer overflow.
    fgets();
    fputs(global, stdout);
    return 0;
}

