#include<stdio.h>
int main (){
    int a;
    char v;
    scanf("%d",&a);
    scanf(" %c",&v); // here without space, character input will not be taken.(You can try in the commented code below.)
    printf("%d%c",a,v);
    return 0;
}

/*
#include<stdio.h>
int main (){
    int a;
    char v;
    scanf("%d",&a);
    scanf("%c",&v); // here without space, character input will not be taken.
    printf("%d%c",a,v);
    return 0;
} 
*/