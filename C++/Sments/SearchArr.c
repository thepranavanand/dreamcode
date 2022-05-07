#include <stdio.h>
int main()
{
    int arr[100];
    int i, size, num1, num2;
    printf("Enter size of array : \n");
    scanf("%d", &size);
    printf("Enter all the elements in array : \n");
    for (i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter the element you want to search : \n");
    scanf("%d", &num1);
    num2 = 0;
    for (i = 0; i < size; i++)
    {
        if (arr[i] == num1)
        {
            num2 = 1;
            break;
        }
    }
    if (num2 == 1)
    {
        printf("%d is found at Position %d.", num1, i + 1);
    }
    else
    {
        printf("%d is not found in the given array.", num1);
    }
    return 0;
}