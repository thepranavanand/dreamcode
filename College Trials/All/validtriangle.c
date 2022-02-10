#include<stdio.h>

int main(){
    int a, b, c;
    printf("Enter three angles of triangle one by one :\n");
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    if(a+b+c==180){
        printf("Triangle is valid");
    }else{
        printf("Triangle is not valid");
    }
    return 0;
}