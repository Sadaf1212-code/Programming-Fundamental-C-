
#include <stdio.h>

int main()
{
    /* ── Q1: Print natural numbers 1 to 10 ── */
    printf("=== Q1: Natural numbers 1 to 10 ===\n");

    // for loop
    int i;
    for (i = 1; i <= 10; i++)
        printf("%d ", i);
    printf("\n");

    // while loop
    i = 1;
    while (i <= 10)
    {
        printf("%d ", i);
        i++;
    }
    printf("\n");

    // do-while loop
    i = 1;
    do
    {
        printf("%d ", i);
        i++;
    } while (i <= 10);
    printf("\n\n");


    /* ── Q2: Print natural numbers in reverse (10 to 1) ── */
    printf("=== Q2: Reverse from 10 to 1 ===\n");

    for (i = 10; i >= 1; i--)
        printf("%d ", i);
    printf("\n\n");


    /* ── Q3: Print all alphabets a to z ── */
    printf("=== Q3: Alphabets a to z ===\n");

    char c;
    for (c = 'a'; c <= 'z'; c++)
        printf("%c ", c);
    printf("\n\n");


    /* ── Q4: Print all even numbers between 1 to 100 ── */
    printf("=== Q4: Even numbers 1-100 ===\n");

    for (i = 1; i <= 100; i++)
    {
        if (i % 2 == 0)
            printf("%d ", i);
    }
    printf("\n\n");


    /* ── Q5: Print all odd numbers between 1 to 100 ── */
    printf("=== Q5: Odd numbers 1-100 ===\n");

    for (i = 1; i <= 100; i++)
    {
        if (i % 2 != 0)
            printf("%d ", i);
    }
    printf("\n");

    return 0;
}
