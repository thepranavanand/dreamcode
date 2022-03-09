// #include <stdio.h>
// #include <math.h>

// double findSQRT(double a) { return sqrt(a); }

// int main()

// {

//     int x , y, z;

//     long int fact = 1;

//     printf("\nenter the number : ");

//     scanf("%d", &x);

//     printf("\n1. Even or Odd");

//     printf("\n2. Positive or Negative");

//     printf("\n3. square");

//     printf("\nEnter choice = ");

//     scanf("%d", &z);

//     switch (z)
//     {
//     case 1:
//         if (x % 2 == 0)
//         {
//             printf("\n%d is EVEN ", x);
//         }
//         else
//         {
//             printf("\n%d is ODD ", x);
//         }
//         break;

//     case 2:
//         if (x >= 0)
//         {
//             printf("\n%d is a positive number", x);
//         }
//         else
//         {
//             printf("\n%d is a negative number", x);
//         }
//         break;

//     case 3:
//         printf("Square of given number is : %d", x * x);
//         break;
//     }
//     return 0;
// }

#include <iostream>
using namespace std;

inline int MAX(int &a, int &b, int &c)
{
    int big = 0;
    if (a > b)
        big = a;
    else
        big = b;
    if (c > big)
        big = c;
    return big;
}

inline int MIN(int &a, int &b, int &c)
{
    int small = 0;
    if (a < b)
        small = a;
    else
        small = b;
    if (c < small)
        small = c;
    return small;
}

int main()
{
    int a, b, c;
    cout << "Name : Pranav Anand\nUID : 21BCS7719\nEnter three numbers to find largest and smallest among them :" << endl;
    cout << "num1 : ";
    cin >> a;
    cout << "num2 : ";
    cin >> b;
    cout << "num3 : ";
    cin >> c;
    int large = MAX(a, b, c);
    cout << "\nLargest of " << a << "," << b << " and " << c << " is " << large;
    int small = MIN(a, b, c);
    cout << "\nSmallest of " << a << "," << b << " and " << c << " is " << small;
    return 0;
}