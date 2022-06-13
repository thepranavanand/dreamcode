#include <stdio.h>
#include <stdlib.h>
int main()
{
    int num, i, *ptr, sum = 0;

    printf("Enter total number of elements(1 to 100): ");
    scanf("%d", &num);

    ptr = (int *)malloc(num * sizeof(int));

    if (ptr == NULL)
    {
        printf("Memory not allocated.");
        return EXIT_FAILURE;
    }

    printf("Enter elements :\n");

    for (i = 0; i < num; i++)
    {
        scanf("%d", ptr + i);
        sum += *(ptr + i);
    }

    printf("Sum is : %d", sum);
    free(ptr);
}