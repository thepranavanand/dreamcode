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



// printf("Please Enter Text: \n");
// if (fgets(global, 50, stdin)) //It will take Maximum 50 chars. So no buffer overflow.
//     getch();
// fputs(global, stdout);

// int main()
// {
//     char buf[15];

//     printf("Enter a string: ");
//     gets(buf);
//     printf("string is: %s\n", buf); /// this process is not recommended because this can overflow any time.

#include <stdio.h>
int main()
{
   char str[20];
   scanf("%s", str);
   printf("%s", str);

   return 0;
}
