#include<stdio.h>

int main (){
    char alp ;
    printf("Enter a letter to check if its a vowel or consonant : ");
    scanf("%c",&alp);
    switch (alp)
    {
    case 'a':
        printf("a is a vowel");
        break;
    case 'e':
        printf("e is a vowel");
        break;
    case 'i':
        printf("i is a vowel");
        break;
    case 'o':
        printf("o is a vowel");
        break;
    case 'u':
        printf("u is a vowel");
        break;
    default:
        printf("%c is a consonant", alp);
        break;
    }
    return 0;
}