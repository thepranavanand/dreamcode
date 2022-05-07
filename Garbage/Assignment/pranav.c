#include<stdio.h>

int main (){
    int num1;
    printf("This code is designed to fulfill your materialistic dreams.\nEnter any random number : \n");
    scanf("%d",&num1);
    char learn[]= "Billion Dollars.";
    char execute[100], first[100], second[100], fname[100];
    sscanf(learn,"%s %s", first, second);
    sprintf(execute, learn);
    printf("Congratulations you got an entry in a lucky draw of %d ",num1);
    puts(execute);
    printf("Yes, you read it right.\n%d\n",num1);
    puts(first);
    puts(second);
    printf("Write your first name to confirm your entry :\n");
    scanf("%s", fname);
    printf("Congratulations %s, YOUR ENTRY IS CONFIRMED :) ");
    return 0;
}