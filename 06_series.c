
#include <stdio.h>

int main()
{
    /* ── Q6: Sum of all odd numbers from 1 to n ── */
    printf("=== Q6: Sum of Odd Numbers (1 to n) ===\n");
    int n, i, sum = 0;
    printf("Enter n: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
        if (i % 2 != 0) sum += i;
    printf("Sum of odd numbers = %d\n\n", sum);


    /* ── Q7: Sum of all even numbers from 1 to n ── */
    printf("=== Q7: Sum of Even Numbers (1 to n) ===\n");
    int sum2 = 0;
    printf("Enter n: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
        if (i % 2 == 0) sum2 += i;
    printf("Sum of even numbers = %d\n\n", sum2);


    /* ── Q9: Multiplication table ── */
    printf("=== Q9: Multiplication Table ===\n");
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    for (i = 1; i <= 10; i++)
        printf("%d x %d = %d\n", num, i, num * i);
    printf("\n");


    /* ── Q17: Sum of natural numbers using formula ── */
    printf("=== Q17: Sum of Natural Numbers ===\n");
    printf("Enter n: ");
    scanf("%d", &n);
    int natSum = n * (n + 1) / 2;
    printf("Sum = %d\n\n", natSum);


    /* ── Fibonacci series ── */
    printf("=== Fibonacci Series ===\n");
    printf("How many terms? ");
    scanf("%d", &n);

    int a = 0, b = 1, next;
    printf("Fibonacci: %d %d ", a, b);
    for (i = 2; i < n; i++)
    {
        next = a + b;
        printf("%d ", next);
        a = b;
        b = next;
    }
    printf("\n\n");


    /* ── Factorial using array ── */
    printf("=== Factorial ===\n");
    printf("Enter a number: ");
    scanf("%d", &n);

    /*
     * Using an array to store intermediate factorials.
     * fact[0] = 1 (base case: 0! = 1)
     * fact[i] = fact[i-1] * i
     */
    #define MAXN 20
    int fact[MAXN];
    fact[0] = 1;
    for (i = 1; i <= n; i++)
        fact[i] = fact[i - 1] * i;
    printf("%d! = %d\n", n, fact[n]);

    return 0;
}
