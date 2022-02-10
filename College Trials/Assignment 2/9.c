#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    char **name_list, array[100];
    int m, n, limit;
    printf("Enter Total Names To Be Entered : \n");
    scanf("%d", &limit);
    name_list = (char **)malloc(sizeof(char *) * limit);
    for (m = 0; m < limit; m++)
    {
        name_list[m] = (char *)malloc(sizeof(char) * 100);
    }
    printf("\nEnter City Names : \n");
    getchar();
    for (m = 0; m < limit; m++)
    {
        fgets(name_list[m], 100, stdin);
    }
    for (m = 0; m < limit - 1; m++)
    {
        for (n = m + 1; n < limit; n++)
        {
            if (strcmp(name_list[m], name_list[n]) > 0)
            {
                strcpy(array, name_list[m]);
                strcpy(name_list[m], name_list[n]);
                strcpy(name_list[n], array);
            }
        }
    }
    printf("\nAscending Order of City Names is :\n");
    for (m = 0; m < limit; m++)
    {
        printf("%s", name_list[m]);
    }
    return 0;
}
