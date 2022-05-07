#include <stdio.h>

union personal
{
    char name[100];
    int date;
    char month[100];
    int year;
    float salary;
};

int main()

{
    union personal p1;
    printf("Enter name : ");
    scanf("%s", p1.name);
    printf("Name is : %s\n", p1.name);

    printf("Enter date of joining : ");
    scanf("%d", &p1.date);
    printf("Date of joining is: %d\n", p1.date);

    printf("Enter month of joining : ");
    scanf("%s", p1.month);
    printf("month of joining is : %s\n", p1.month);

    printf("Enter year of joining : ");
    scanf("%d", &p1.year);
    printf("year of joining is : %d\n", p1.year);

    printf("Enter salary: ");
    scanf("%f", &p1.salary);
    printf("Salary is: %f\n", p1.salary);

    return 0;
}