#include <stdio.h>

int main()
{
    /* ── Q10: Count digits in a number ── */
    printf("=== Q10: Count Digits ===\n");
    int n, count = 0;
    printf("Enter a number: ");
    scanf("%d", &n);

    if (n == 0)
        count = 1;
    else
    {
        if (n < 0) n = -n;   // handle negative
        int temp = n;
        while (temp > 0)
        {
            count++;
            temp /= 10;
        }
    }
    printf("Number of digits: %d\n\n", count);


    /* ── Q18: Print all factors and their sum ── */
    printf("=== Q18: Factors and Sum ===\n");
    int num, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Factors of %d: ", num);
    for (int i = 1; i <= num; i++)
    {
        if (num % i == 0)
        {
            printf("%d ", i);
            sum += i;
        }
    }
    printf("\nSum of factors = %d\n\n", sum);


    /* ── Q16 (extra): Difference between two numbers ── */
    printf("=== Difference Between Two Numbers ===\n");
    int x, y;
    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);
    printf("Difference = %d\n\n", (x >= y) ? (x - y) : (y - x));


    /* ── Palindrome check (array method) ── */
    printf("=== Palindrome Check (array of integers) ===\n");
    /*
     * Enter how many numbers, then the numbers.
     * Example: 5 numbers → 1 2 3 2 1 → Palindrome
     */
    int size;
    printf("Enter array size: ");
    scanf("%d", &size);
    int arr[size];
    printf("Enter %d elements: ", size);
    for (int i = 0; i < size; i++)
        scanf("%d", &arr[i]);

    int flag = 0;
    for (int i = 0; i <= size / 2; i++)
    {
        if (arr[i] != arr[size - i - 1])
        {
            flag = 1;
            break;
        }
    }
    printf(flag ? "Not Palindrome\n\n" : "Palindrome\n\n");


    /* ── Q24: Find maximum of 3 numbers (nested if-else) ── */
    printf("=== Q24: Maximum of 3 Numbers ===\n");
    int a, b, c;
    printf("Enter 3 numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a > b)
    {
        if (a > c) printf("Max = %d\n\n", a);
        else       printf("Max = %d\n\n", c);
    }
    else
    {
        if (b > c) printf("Max = %d\n\n", b);
        else       printf("Max = %d\n\n", c);
    }


    /* ── Digit sum ── */
    printf("=== Sum of Digits ===\n");
    int p, digitSum = 0;
    printf("Enter a number: ");
    scanf("%d", &p);
    while (p > 0)
    {
        digitSum += p % 10;
        p /= 10;
    }
    printf("Sum of digits = %d\n", digitSum);

    return 0;
}
