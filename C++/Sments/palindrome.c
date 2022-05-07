#include <stdio.h>
int main() {
  int num1, num2, reversed = 0, remainder;
    printf("Enter an integer: ");
    scanf("%d", &num1);
    num2 = num1;

    while (num1 != 0) {
        remainder = num1 % 10;
        num2 = num2 * 10 + remainder;
        num1 /= 10;
    }

    if (num2 == reversed)
        printf("%d is a palindrome.", num2);
    else
        printf("%d is not a palindrome.", num2);

    return 0;
}