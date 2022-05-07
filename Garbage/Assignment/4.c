#include <stdio.h>
int main()
{

    float x, y, perimeter, area;
    printf("Enter height of the rectangle (in inches):\n");
    scanf("%f", &x);
    printf("Enter breadth of the rectangle (in inches) :\n");
    scanf("%f", &y);
    perimeter = 2 * x + 2 * y;
    area = x * y;
    printf("Perimeter of retangle is : %f inches.\n", perimeter);
    printf("Area of rectangle is : %f inches.\n" , area);
    return 0;
}