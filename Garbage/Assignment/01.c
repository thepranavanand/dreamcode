#include<stdio.h>

int main (){
    int num1;
    printf("This is a lucky draw.\nEnter a random number : \n");
    scanf("%d",&num1);
    char learn[]= "Billion Dollars.";
    char execute[100], one[100], two[100];
    sscanf(learn,"%s %s", one, two);
    sprintf(execute, learn);
    printf("Congratulations you won %d ",num1);
    puts(execute);
    printf("Yes, you read it right.\nYour prize amount currency is in ");
    puts(one);
    puts(two);
    return 0;
}