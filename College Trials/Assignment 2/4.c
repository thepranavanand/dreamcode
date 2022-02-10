#include <stdio.h>
#include <stdlib.h>
struct music
{
    char Title[100];
    char SingerName[100];
    char Album[100];
};

int main()
{
    struct music *ptr;
    int noOfRecords;
    printf("Enter number of Records to Store Inventory of Music Library: \n");
    scanf("%d", &noOfRecords);

    ptr = (struct music *)malloc(noOfRecords * sizeof(struct music));
    for (int i = 0; i < noOfRecords; ++i)
    {
        printf("Enter Title, Singer Name and Album:\n");
        scanf("%s %s %s", (ptr + i)->Title, (ptr + i)->SingerName, (ptr + i)->Album);
    }

    printf("Displaying Information:\n");
    for (int i = 0; i < noOfRecords; ++i)
    {
        printf("%s\t%s\t%s\n", (ptr + i)->Title, (ptr + i)->SingerName, (ptr + i)->Album);
    }

    free(ptr);

    return 0;
}