#include <stdio.h>
int main()
{
double a,n=1;
printf("\nEnter the number : \n");
scanf("%lf",&a);
start:
n=n*a;
a--;
if(a>0)
{
  goto start;
}
printf("The Total value is :%lf",n);
return 0;
}