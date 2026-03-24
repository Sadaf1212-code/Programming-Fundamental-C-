 Q: Check odd or even
#include <stdio.h>
int main()
{

    printf("=== Q13: Odd or Even ===\n");
    int a;
    printf("Enter a number: ");
    scanf("%d", &a);

    if (a % 2 == 0)
        printf("%d is Even\n\n", a);
    else
        printf("%d is Odd\n\n", a);

  Q .Day of week using if-else 
    printf("=== Q14: Day of Week (1=Sat ... 7=Fri) ===\n");
    int n;
    printf("Enter day number (1-7): ");
    scanf("%d", &n);

    if (n == 1)      printf("Saturday\n\n");
    else if (n == 2) printf("Sunday\n\n");
    else if (n == 3) printf("Monday\n\n");
    else if (n == 4) printf("Tuesday\n\n");
    else if (n == 5) printf("Wednesday\n\n");
    else if (n == 6) printf("Thursday\n\n");
    else if (n == 7) printf("Friday\n\n");
    else             printf("Invalid input\n\n");


  Q: Grade using if-else ── */
    printf("=== Q16a: Grade (if-else) ===\n");
    float marks;
    printf("Enter your marks (0-100): ");
    scanf("%f", &marks);

    if      (marks >= 90 && marks <= 100) printf("Grade: A\n\n");
    else if (marks >= 85 && marks <= 89)  printf("Grade: B\n\n");
    else if (marks >= 70 && marks <= 84)  printf("Grade: C\n\n");
    else if (marks >= 65 && marks <= 69)  printf("Grade: D\n\n");
    else if (marks >= 50 && marks <= 64)  printf("Grade: E\n\n");
    else if (marks >= 0  && marks <= 49)  printf("Grade: F\n\n");
    else                                  printf("Invalid marks\n\n");


    Grade using switch-case 
    printf("=== Q16b: Grade (switch-case) ===\n");
    int m;
    printf("Enter your marks as integer (0-100): ");
    scanf("%d", &m);

    switch (m / 5)
    {
        case 20: case 19: case 18:
            printf("Grade: A\n"); break;
        case 17:
            printf("Grade: B\n"); break;
        case 16: case 15: case 14:
            printf("Grade: C\n"); break;
        case 13:
            printf("Grade: D\n"); break;
        case 12: case 11: case 10:
            printf("Grade: E\n"); break;
        case 9: case 8: case 7: case 6:
        case 5: case 4: case 3: case 2:
        case 1: case 0:
            printf("Grade: F\n"); break;
        default:
            printf("Invalid marks\n");
    }

    return 0;
}
