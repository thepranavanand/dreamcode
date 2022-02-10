// Q1. Write a c program to calculate area of a rectangle.
// 1) using hard coded inputs

#include <stdio.h>

int main()
{
    int length = 5, breadth = 6;
    int area = length * breadth;
    printf("Area of rectangle of given dimensions is : %d", area);
    return 0;
}

// 2) Using input supplied by the user.

#include <stdio.h>

int main()
{
    int a, b;
    printf("Enter length of the rectangle : ");
    scanf("%d", &a);
    printf("Enter breadth of the rectangle : ");
    scanf("%d", &b);
    printf("Area of the rectangle of given dimensions is : %d", a * b);
    return 0;
}

// Q2. Calculate the area of a circle and modify the same program to
// calculate the volume of a cylinder given its values and height.

#include <stdio.h>

int main()
{
    int r = 7;
    float pi = 22 / 7;
    float arcir = pi * r * r;
    printf("Area of circle (in cm) is : %f\n", arcir);
    int h = 5;
    float vol = arcir * h;
    printf("Volume of cylinder (in cm) is : %f", vol);
    return 0;
}

// Write a program to convert Calculus ( Cebtigrate degrees ) into Fahrenheit degrees.

#include <stdio.h>

int main()
{
    printf("Enter temperature in Centigrate : ");
    float C;
    scanf("%f", &C);
    float F = C * 9 / 5 + 32;
    printf("Temperature in Fahrenheit is : %f", F);
    return 0;
}

// Write  a program to calculate simple interest for a set of values representing principal , number of years and rate of interest.

#include <stdio.h>

int main()
{
    int principal = 3500, rate = 4, years = 2;
    int simpleInterest = (principal * rate * years) / 100;
    printf("The value of simple interest is %d", simpleInterest);
    return 0;
}