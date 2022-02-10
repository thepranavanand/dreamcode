#include<stdio.h>
#include<stdlib.h>

int main (){
    int age = 20;
    int *page = &age;
    
    printf("%d ",*page);
    printf("%d ",*&age);
    printf("%d ",&*&age);
    printf("%d ",*&*&age);

    return 0;
}