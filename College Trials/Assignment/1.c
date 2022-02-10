#include <stdio.h>

int main()
{
    float r, perimeter, area;
    printf("Enter radius of circle (in inches):\n");
    scanf("%f", &r);
    perimeter = 2 * 3.14 * r;
    area = 3.14 * r * r;
    printf("Perimeter of circle is : %f inches.\n", perimeter);
    printf("Area of circle is : %f inches.\n", area);
    return 0;
}