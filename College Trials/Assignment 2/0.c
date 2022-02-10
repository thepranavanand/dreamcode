#include <stdio.h>

struct personal
{
    char name[100];
    int date;
    char month[100];
    int year;
    float salary;
};

int main()

{
    struct personal person;

    printf("Enter name, date, month and year of joining, and salary respectively : \n");

    scanf("%s %d %s %d %f", person.name, &person.date, person.month, &person.year, &person.salary);
    printf("%s %d %s %d %f\n", person.name, person.date, person.month, person.year, person.salary);
    return 0;
}