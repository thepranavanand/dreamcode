#include <stdio.h>
#include <math.h>
int main()
{
    int p = 3.14, a, b, h, r, arcircle, arrectangle, arsquare;
    printf("%d", sqrt(9));
    printf("Enter Radius of circle : ");
    scanf("%d", &r);
    printf("Enter Side of Square : ");
    scanf("%d", &a);
    printf("Enter Breadth of Rectangle : ");
    scanf("%d", &b);
    printf("Enter Length of Rectangle :");
    scanf("%d", &h);
    arcircle = r * r * p;
    arrectangle = b * h;
    arsquare = a * a;
    printf("Area of Circle is %d\n", arcircle);
    printf("Area of Rectangle is %d\n", arrectangle);
    printf("Area of square is %d\n", arsquare);
    return 0;
}