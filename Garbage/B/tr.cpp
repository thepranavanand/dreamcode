#include<stdio.h>
int main ()
{
  int x, y, num1, count = 0;
  scanf("%d",&num1);
  while(num1 != -1)
  {
    x = num1;
    scanf("%d",&num1);
    y = num1;
    if((x!=y) && (num1!=-1))
    {
      count++;
  }
    
    if(count>=2)
      printf("1");
    else 
      printf("0");
    return 0;
  }