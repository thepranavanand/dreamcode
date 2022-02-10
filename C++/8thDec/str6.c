#include<stdio.h>
#include<string.h>
int i, j, k;
int main (){
    char arr1[20] = "Pranav";
    char arr2[20] = " Anand";
    char arr3[20];
    char arr4[20] = "racecar";
    i = strlen(arr1);
    j = strlen(arr2);
    k = strcmp(arr1, arr2);
    strcpy(arr3, arr1);
    printf("Concatenation of arr1 and arr2 is %s.\n", strcat(arr1, arr2));
    printf("Length of string 1 : %d\n",i);
    printf("Length of string 2 : %d\n",j);
    printf("String compare result between default value of arr1 and arr2 is : %d\n", k);
    printf("Reversed word of arr4 is : %s\n",strrev(arr4));
    printf("Value of arr3 is : %s",arr3);
    return 0;
}