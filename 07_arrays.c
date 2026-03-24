#include <stdio.h>

int main()
{
    /* ── Bubble Sort (corrected) ── */
    printf("=== Bubble Sort ===\n");
    /*
     * TRUE bubble sort: compare adjacent elements (j and j+1)
     * each pass "bubbles" the largest unsorted element to the end.
     *
     * NOTE: The version in the class notes used arr[i] vs arr[j]
     * where j = i+1 — that is actually Selection Sort logic.
     * The correct bubble sort is shown below.
     */
    int n, i, j;
    printf("Enter array size: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++) scanf("%d", &arr[i]);

    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - i - 1; j++)   // n-i-1 because last i elements are sorted
        {
            if (arr[j] > arr[j + 1])
            {
                int temp  = arr[j];
                arr[j]    = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    printf("Sorted: ");
    for (i = 0; i < n; i++) printf("%d ", arr[i]);
    printf("\n\n");


    /* ── Linear Search ── */
    printf("=== Linear Search ===\n");
    long long size;
    printf("Enter array size: ");
    scanf("%lld", &size);
    long long brr[size];
    printf("Enter %lld elements: ", size);
    for (i = 0; i < size; i++) scanf("%lld", &brr[i]);

    long long x;
    printf("Enter number to search: ");
    scanf("%lld", &x);

    int found = 0;
    for (i = 0; i < size; i++)
    {
        if (brr[i] == x)
        {
            printf("Found at index %d\n\n", i);
            found = 1;
            break;
        }
    }
    if (!found) printf("Not found (-1)\n\n");


    /* ── Insert element at a specific position ── */
    printf("=== Insert at Position ===\n");
    int sz, pos, val;
    printf("Enter array size: ");
    scanf("%d", &sz);
    int crr[sz + 1];
    printf("Enter %d elements: ", sz);
    for (i = 0; i < sz; i++) scanf("%d", &crr[i]);

    printf("Enter position (1-indexed) and value: ");
    scanf("%d %d", &pos, &val);

    // Shift elements right from the end down to pos
    for (i = sz; i >= pos; i--)
        crr[i] = crr[i - 1];
    crr[pos - 1] = val;
    sz++;

    printf("Array after insertion: ");
    for (i = 0; i < sz; i++) printf("%d ", crr[i]);
    printf("\n\n");


    /* ── Even or Odd in array ── */
    printf("=== Even / Odd in Array ===\n");
    #define N 5
    int drr[N];
    printf("Enter %d elements: ", N);
    for (i = 0; i < N; i++) scanf("%d", &drr[i]);

    for (i = 0; i < N; i++)
    {
        if (drr[i] % 2 == 0)
            printf("%d → Even\n", drr[i]);
        else
            printf("%d → Odd\n", drr[i]);
    }
    printf("\n");


    /* ── Find Min and Max in array ── */
    printf("=== Min and Max ===\n");
    int errsz;
    printf("Enter array size: ");
    scanf("%d", &errsz);
    int err[errsz];
    printf("Enter %d elements: ", errsz);
    for (i = 0; i < errsz; i++) scanf("%d", &err[i]);

    int max = err[0], min = err[0];
    for (i = 1; i < errsz; i++)
    {
        if (err[i] > max) max = err[i];
        if (err[i] < min) min = err[i];
    }
    printf("Max = %d | Min = %d\n", max, min);

    return 0;
}
