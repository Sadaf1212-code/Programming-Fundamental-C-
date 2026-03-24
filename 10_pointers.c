
#include <stdio.h>

/* ── Find min and max using pointers ── */
void findMinMax(int arr[], int n, int *max, int *min)
{
    *max = arr[0];
    *min = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > *max) *max = arr[i];
        if (arr[i] < *min) *min = arr[i];
    }
}

/*
 * ── Swap using ACTUAL pointers (FIXED) ──
 *
 * The class notes version:
 *   void swap_numbers(int ptr1, int ptr2) { ... }
 * passes integers by VALUE — changes inside the function
 * are lost and the original variables are not swapped.
 *
 * Fix: pass POINTERS (int *ptr1, int *ptr2).
 */
void swapPointers(int *ptr1, int *ptr2)
{
    int temp = *ptr1;
    *ptr1    = *ptr2;
    *ptr2    = temp;
}


int main()
{
    /* ── Pointer basics ── */
    printf("=== Pointer Basics ===\n");
    int x = 10;
    int *p = &x;
    printf("Value of x   = %d\n", x);
    printf("Address of x = %p\n", (void *)&x);
    printf("*p (via pointer) = %d\n\n", *p);


    /* ── Pointer array (input/output using pointer arithmetic) ── */
    printf("=== Pointer Array ===\n");
    int n;
    printf("Enter array size: ");
    scanf("%d", &n);
    int arr[n];
    int *ptr = arr;   // ptr points to arr[0]

    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++)
        scanf("%d", ptr + i);   // ptr+i is equivalent to &arr[i]

    printf("Array via pointer: ");
    for (int i = 0; i < n; i++)
        printf("%d ", *(ptr + i));
    printf("\n\n");


    /* ── Sum using pointer ── */
    printf("=== Sum of Array via Pointer ===\n");
    int arr2[5] = {2, 5, -1, 7, 8};
    int *p2 = arr2;
    int s = 0;
    for (int i = 0; i < 5; i++)
    {
        s += *p2;
        p2++;
    }
    printf("Fixed array {2,5,-1,7,8} → Sum = %d\n\n", s);


    /* ── Min and Max using pointer ── */
    printf("=== Min and Max via Pointer ===\n");
    int sz;
    printf("Enter array size: ");
    scanf("%d", &sz);
    int arr3[sz];
    printf("Enter %d elements: ", sz);
    for (int i = 0; i < sz; i++) scanf("%d", &arr3[i]);

    int maxVal, minVal;
    findMinMax(arr3, sz, &maxVal, &minVal);
    printf("Max = %d | Min = %d\n\n", maxVal, minVal);


    /* ── Swap using pointers (corrected) ── */
    printf("=== Swap via Pointer (corrected) ===\n");
    int num1, num2;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    printf("Before swap: %d %d\n", num1, num2);
    swapPointers(&num1, &num2);   // pass addresses, not values
    printf("After swap:  %d %d\n", num1, num2);

    return 0;
}
