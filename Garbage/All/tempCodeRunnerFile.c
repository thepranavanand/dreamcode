#include<stdio.h>

int main (){
    int year;
    printf("Enter a year to check if it is a leap year or not \n");
    scanf("%d", &year);
    if(year%100==0 && year%400==0){
        printf("Leap Year");
    }else{
        printf("Not a leap year");
    }
    return 0;
}