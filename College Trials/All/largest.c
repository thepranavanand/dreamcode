#include<stdio.h>
#include<math.h>

int main (){
    int a, b, c, d, max;
    printf("Enter 1st number : \n");
    scanf("%d", &a);
    printf("Enter 2nd number : \n");
    scanf("%d", &b);
    printf("Enter 3rd number : \n");
    scanf("%d", &c);
    printf("Enter 4th number : \n");
    scanf("%d", &d);
    (a>b)&&(a>c)&&(a>d) ? printf("%d is the greatest",a) : ((b>c)&&(b>d)) ? printf("%d is the greatest",b) : (c>d) ? printf("%d is the greatest",c) : printf("%d is the greatest",d);
    return 0;
}