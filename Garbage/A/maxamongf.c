#include <stdio.h>
 
int main()
{
    int n1, n2, n3, n4, n5, max;
    printf("Enter five numbers : \n");
    scanf("%d %d %d %d %d", &n1, &n2, &n3, &n4, &n5);

    max = (n1 > n2 && n1 > n3 && n1 > n4 && n1 > n5) ? n1 : (n2 > n3 && n2 > n4 && n2 > n5) ? n2 : (n3 > n4 && n3 > n5) ? n3 : (n4>n5) ? n4 : n5;
     
    printf("Largest number among %d, %d, %d, %d and %d is %d.", n1, n2, n3, n4, n5, max);
 
    return 0;
}
 