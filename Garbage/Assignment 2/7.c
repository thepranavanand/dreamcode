#include <stdio.h>
#include <stdlib.h>
struct music
{
    int EmpID;
    char Name[100];
    char Dep[100];
};

int main()
{
    struct music *ptr;
    int noOfRecords;
    printf("Enter number of Records to Store Information of employee : \n");
    scanf("%d", &noOfRecords);

    ptr = (struct music *)malloc(noOfRecords * sizeof(struct music));
    for (int i = 0; i < noOfRecords; ++i)
    {
        printf("Enter Employee Id, Name, and Department :\n");
        scanf("%d %s %s", &(ptr + i)->EmpID, (ptr + i)->Name, (ptr + i)->Dep);
    }

    printf("\nDisplaying Information:\n");
    for (int i = 0; i < noOfRecords; ++i)
    {
        printf("%d\t%s\t%s\n", (ptr + i)->EmpID, (ptr + i)->Name, (ptr + i)->Dep);
    }

    free(ptr);

    return 0;
}