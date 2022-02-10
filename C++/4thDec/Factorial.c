#include<stdio.h>
int i, num1, fact = 1;
int main (){
    scanf("%d",&num1);
    for(i=1;i<=num1;i++){
        fact = fact*i;
    }
    printf("%d",fact);
    return 0;
}
