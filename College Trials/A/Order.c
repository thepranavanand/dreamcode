#include <stdio.h>

int main()
{
    char food;
    int quantity;
    printf("Enter : \nB for Burger.\nF for French Fries.\nP for Pizza.\nS for Sandwich.\nI for Ice-Cream.\n");
    scanf("%c", &food);
    switch (food)
    {
    case 'B':
        printf("Enter the quantity of Burger(s) you want :\n");
        scanf("%d", &quantity);
        printf("Total charges for this order is Rs.%d", quantity * 220);
        break;
    case 'F':
        printf("Enter the quantity of French Fries you want :\n");
        scanf("%d", &quantity);
        printf("Total charges for this order is Rs.%d", quantity * 50);
        break;
    case 'P':
        printf("Enter the quantity of Pizza(s) you want :\n");
        scanf("%d", &quantity);
        printf("Total charges for this order is Rs.%d", quantity * 300);
        break;
    case 'S':
        printf("Enter the quantity of Sandwich(es) you want :\n");
        scanf("%d", &quantity);
        printf("Total charges for this order is Rs.%d", quantity * 150);
        break;
    case 'I':
        printf("Enter the quantity of Ice-Cream(s) you want :\n");
        scanf("%d", &quantity);
        printf("Total charges for this order is Rs.%d", quantity * 90);
        break;
    default:
        printf("Invalid request");
        break;
    }
    return 0;
}