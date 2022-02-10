// #include<stdio.h>

// int main (){
//     int a = 212, b = 200;
//     printf("Result after left shift will be : %d\n",a<<1);
//     printf("Result after right shift will be : %d\n",a>>1);
//     printf("Result after left shift will be : %d\n",a<<0);
//     printf("Result after left shift will be : %d\n",a<<4);
//     printf("Result after left shift will be : %d\n",b<<1);
//     printf("Result after right shift will be : %d\n",b>>1);
//     printf("Result after right shift will be : %d\n",b>>0);
//     printf("Result after right shift will be : %d\n",b>>4);
//     return 0;
// }

#include<stdio.h>

int main (){
    int a = 12, b = 25;
    printf("Output = %d\n", a&b);
    printf("Output = %d\n", a|b);
    printf("Output = %d\n", a^b);
    printf("Output = %d\n", ~a);
    printf("Output = %d\n", a>>4);
    printf("Output = %d\n", a<<6);
    return 0;
}