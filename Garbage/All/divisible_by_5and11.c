#include<stdio.h>

int main (){
    int a;
    printf("Enter a number to check if it is divisible by 5 and 11 is not : ");
    scanf("%d",&a);
    if(a%5==0||a%11==0){
        printf("%d is divisible by 5 and 11",a);
    }else{
        printf("%d is not divisible by 5 and 11",a);
    }
    return 0;
}