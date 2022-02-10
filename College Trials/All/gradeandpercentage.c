#include <stdio.h>
// # -> pre processor directive
int main()
{
    int sub1, sub2, sub3, sub4, sub5, score;
    float percentage;
    char grade;
    printf("Enter marks in 5 subjects out of 100 : \n");
    scanf("%d%d%d%d%d", &sub1, &sub2, &sub3, &sub4, &sub5);
    score = sub1 + sub2 + sub3 + sub4 + sub5;
    percentage = ((float)score / 500 * 100);
    printf("Your Percentage is : %.2f%%\n", percentage);

    // score is valid if it belongs to 0-500
    if (score < 0 || score > 500)
    {
        printf("Invalid Score");
        return 0;
    }

    // for score >= 90
    if (score > 450 && score <= 500)
        grade = 'A';

    // for score>=80 and <90
    else if (score > 400)
        grade = 'B';

    // for score>=70 and <80
    else if (score > 350)
        grade = 'C';

    // for score>=60 and <70
    else if (score > 300)
        grade = 'D';

    // for score>=50 and <60
    else if (score > 250)
        grade = 'E';

    // for score<=250
    else
        grade = 'F';

    printf("Your Grade is: %c\n", grade);

    return 0;
}