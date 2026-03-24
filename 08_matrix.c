#include <stdio.h>
#include <stdlib.h>

#define SIZE 3

/* Helper: input a SIZE×SIZE matrix */
void inputMatrix(int m[][SIZE], char name)
{
    printf("Enter Matrix %c (%dx%d):\n", name, SIZE, SIZE);
    for (int r = 0; r < SIZE; r++)
        for (int c = 0; c < SIZE; c++)
            scanf("%d", &m[r][c]);
}

/* Helper: print a SIZE×SIZE matrix */
void printMatrix(int m[][SIZE])
{
    for (int r = 0; r < SIZE; r++)
    {
        for (int c = 0; c < SIZE; c++)
            printf("%4d", m[r][c]);
        printf("\n");
    }
}

int main()
{
    int A[SIZE][SIZE], B[SIZE][SIZE], R[SIZE][SIZE];
    int r, c;

    /* ── Add two matrices ── */
    printf("=== Matrix Addition ===\n");
    inputMatrix(A, 'A');
    inputMatrix(B, 'B');
    for (r = 0; r < SIZE; r++)
        for (c = 0; c < SIZE; c++)
            R[r][c] = A[r][c] + B[r][c];
    printf("A + B =\n");
    printMatrix(R);
    printf("\n");


    /* ── Subtract two matrices ── */
    printf("=== Matrix Subtraction ===\n");
    inputMatrix(A, 'A');
    inputMatrix(B, 'B');
    for (r = 0; r < SIZE; r++)
        for (c = 0; c < SIZE; c++)
            R[r][c] = A[r][c] - B[r][c];
    printf("A - B =\n");
    printMatrix(R);
    printf("\n");


    /* ── Multiply two matrices ── */
    printf("=== Matrix Multiplication ===\n");
    /*
     * For A (r1×c1) × B (r2×c2):
     * Condition: c1 must equal r2
     * Result size: r1 × c2
     *
     * Here using dynamic row/col input for flexibility.
     */
    int r1, c1, r2, c2;
    printf("Enter rows and cols of Matrix A: ");
    scanf("%d %d", &r1, &c1);
    printf("Enter rows and cols of Matrix B: ");
    scanf("%d %d", &r2, &c2);

    if (c1 != r2)
    {
        printf("Multiplication not possible! Columns of A must equal rows of B.\n\n");
    }
    else
    {
        int a[50][50], b[50][50], res[50][50];
        printf("Enter Matrix A:\n");
        for (int i = 0; i < r1; i++)
            for (int j = 0; j < c1; j++)
                scanf("%d", &a[i][j]);

        printf("Enter Matrix B:\n");
        for (int i = 0; i < r2; i++)
            for (int j = 0; j < c2; j++)
                scanf("%d", &b[i][j]);

        // Multiply
        for (int i = 0; i < r1; i++)
        {
            for (int j = 0; j < c2; j++)
            {
                res[i][j] = 0;
                for (int k = 0; k < c1; k++)
                    res[i][j] += a[i][k] * b[k][j];
            }
        }

        printf("A x B =\n");
        for (int i = 0; i < r1; i++)
        {
            for (int j = 0; j < c2; j++)
                printf("%4d", res[i][j]);
            printf("\n");
        }
        printf("\n");
    }


    /* ── Sum of main diagonal elements ── */
    printf("=== Sum of Main Diagonal ===\n");
    /*
     * Main diagonal: elements where row index == col index
     * Example 3×3:
     * [ d . . ]
     * [ . d . ]
     * [ . . d ]
     */
    inputMatrix(A, 'A');
    int diagSum = 0;
    for (r = 0; r < SIZE; r++)
        diagSum += A[r][r];
    printf("Matrix:\n");
    printMatrix(A);
    printf("Sum of main diagonal = %d\n\n", diagSum);


    /* ── Check matrix equality ── */
    printf("=== Matrix Equality Check ===\n");
    inputMatrix(A, 'A');
    inputMatrix(B, 'B');

    int equal = 1;
    for (r = 0; r < SIZE && equal; r++)
        for (c = 0; c < SIZE && equal; c++)
            if (A[r][c] != B[r][c]) equal = 0;

    printf(equal ? "Matrices are EQUAL\n\n" : "Matrices are NOT EQUAL\n\n");


    /* ── Interchange diagonal elements ── */
    printf("=== Swap Diagonal Elements ===\n");
    /*
     * Swaps A[r][r] (main diagonal) with A[r][SIZE-1-r] (anti-diagonal)
     * for each row r.
     */
    inputMatrix(A, 'A');
    printf("Before swap:\n");
    printMatrix(A);

    for (r = 0; r < SIZE; r++)
    {
        int temp         = A[r][r];
        A[r][r]          = A[r][SIZE - 1 - r];
        A[r][SIZE - 1 - r] = temp;
    }

    printf("After diagonal swap:\n");
    printMatrix(A);

    return 0;
}
