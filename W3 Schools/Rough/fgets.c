#include<stdio.h>
#include<conio.h>

int main (){
    char a[100];
    fgets(a, 50, stdin);
    getch();
    fputs(a, stdout);
    return 0;
}