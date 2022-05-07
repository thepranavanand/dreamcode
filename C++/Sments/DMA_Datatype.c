#include <stdio.h>
#include <stdlib.h>
int main()
{

    int *inte;
    char *ch;
    float *ft;
    inte = (int *)malloc(1 * sizeof(int));
    ch = (char *)malloc(1 * sizeof(char) * 1);
    ft = (float *)malloc(1 * sizeof(float));
    printf("Enter the value for integer : ");
    scanf("%d", inte);
    printf("Enter the value for char : ");
    scanf(" %c", ch);
    printf("Enter the value for float : ");
    scanf("%f", ft);
    printf("Integer : %d", *inte);
    printf("\nChar : %c", *ch);
    printf("\nFloat : %f", *ft);
    free(inte);
    free(ch);
    free(ft);
    return 0;
}