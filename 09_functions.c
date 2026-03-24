#include <stdio.h>

/* ── Sum: return version ── */
int sumReturn(int a, int b)
{
    return a + b;
}

/* ── Sum: void version (prints directly) ── */
void sumVoid(int a, int b)
{
    printf("Sum = %d\n", a + b);
}

/* ── Check even or odd ── */
void checkEvenOdd(int a)
{
    if (a % 2 == 0) printf("%d is Even\n", a);
    else            printf("%d is Odd\n", a);
}

/* ── Return the larger of two numbers ── */
int findMax(int a, int b)
{
    return (a > b) ? a : b;
}

/* ── Factorial (iterative) ── */
int factorial(int a)
{
    int fact = 1;
    for (int i = 1; i <= a; i++)
        fact *= i;
    return fact;
}

/* ── Prime check ── */
int isPrime(int n)
{
    if (n <= 1) return 0;
    for (int i = 2; i <= n / 2; i++)
        if (n % i == 0) return 0;   // divisible → not prime
    return 1;
}

/* ── Fibonacci (iterative, returns nth term, 0-indexed) ── */
/*
 * fib(0) = 0, fib(1) = 1, fib(2) = 1, fib(3) = 2, ...
 * The notes label this "recursion" but the implementation
 * is iterative — which is more efficient and correct.
 */
int fib(int n)
{
    if (n == 0) return 0;
    if (n == 1) return 1;
    int a = 0, b = 1, c;
    for (int i = 2; i <= n; i++)
    {
        c = a + b;
        a = b;
        b = c;
    }
    return b;
}

/* ── Fibonacci using ACTUAL recursion ── */
int fibRecursive(int n)
{
    if (n == 0) return 0;
    if (n == 1) return 1;
    return fibRecursive(n - 1) + fibRecursive(n - 2);
    /*
     * NOTE: This is simple but slow for large n.
     * For n > ~35 it gets very slow (exponential time).
     * Use the iterative fib() above for large values.
     */
}


int main()
{
    int a, b;

    /* ── Sum demos ── */
    printf("=== Sum (return version) ===\n");
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    printf("Sum = %d\n\n", sumReturn(a, b));

    printf("=== Sum (void version) ===\n");
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    sumVoid(a, b);
    printf("\n");

    /* ── Even / Odd ── */
    printf("=== Even or Odd ===\n");
    printf("Enter a number: ");
    scanf("%d", &a);
    checkEvenOdd(a);
    printf("\n");

    /* ── Max of two ── */
    printf("=== Max of Two Numbers ===\n");
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    printf("Max = %d\n\n", findMax(a, b));

    /* ── Factorial ── */
    printf("=== Factorial ===\n");
    printf("Enter a number: ");
    scanf("%d", &a);
    printf("%d! = %d\n\n", a, factorial(a));

    /* ── Prime check ── */
    printf("=== Prime Number Check ===\n");
    printf("Enter a number: ");
    scanf("%d", &a);
    printf(isPrime(a) ? "%d is Prime\n\n" : "%d is Not Prime\n\n", a);

    /* ── Fibonacci series ── */
    printf("=== Fibonacci Series ===\n");
    int n;
    printf("How many terms? ");
    scanf("%d", &n);
    printf("Fibonacci (iterative): ");
    for (int i = 0; i < n; i++) printf("%d ", fib(i));
    printf("\n");
    printf("Fibonacci (recursive): ");
    for (int i = 0; i < n; i++) printf("%d ", fibRecursive(i));
    printf("\n");

    return 0;
}
