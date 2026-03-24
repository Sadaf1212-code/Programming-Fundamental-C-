#include <stdio.h>
int main()
{
    /* ── Q26: Gross salary calculator ── */
    printf("=== Q26: Gross Salary Calculator ===\n");
    /*
     * HRA and DA rates based on basic salary:
     * basic <= 10000 → HRA = 20%, DA = 80%
     * basic <= 20000 → HRA = 25%, DA = 90%
     * basic >  20000 → HRA = 30%, DA = 90%
     * Gross = basic + HRA + DA
     */
    float basic, hra, da, gross;
    printf("Enter basic salary: ");
    scanf("%f", &basic);

    if (basic <= 10000)
    {
        hra = basic * 0.20f;
        da  = basic * 0.80f;
    }
    else if (basic <= 20000)
    {
        hra = basic * 0.25f;
        da  = basic * 0.90f;
    }
    else
    {
        hra = basic * 0.30f;
        da  = basic * 0.90f;
    }
    gross = basic + hra + da;
    printf("Basic = %.2f | HRA = %.2f | DA = %.2f\n", basic, hra, da);
    printf("Gross Salary = %.2f\n\n", gross);


    /* ── Q27: Count currency notes ── */
    printf("=== Q27: Currency Note Count ===\n");
    int amnt;
    int n1000, n500, n100, n50, n20, n10, n5, n2, n1;
    n1000 = n500 = n100 = n50 = n20 = n10 = n5 = n2 = n1 = 0;

    printf("Enter amount: ");
    scanf("%d", &amnt);

    n1000 = amnt / 1000; amnt %= 1000;
    n500  = amnt / 500;  amnt %= 500;
    n100  = amnt / 100;  amnt %= 100;
    n50   = amnt / 50;   amnt %= 50;
    n20   = amnt / 20;   amnt %= 20;
    n10   = amnt / 10;   amnt %= 10;
    n5    = amnt / 5;    amnt %= 5;
    n2    = amnt / 2;    amnt %= 2;
    n1    = amnt;

    printf("1000: %d\n 500: %d\n 100: %d\n  50: %d\n"
           "  20: %d\n  10: %d\n   5: %d\n   2: %d\n   1: %d\n\n",
           n1000, n500, n100, n50, n20, n10, n5, n2, n1);


    /* ── Q28: Days in a month ── */
    printf("=== Q28: Days in a Month ===\n");
    int month;
    printf("Enter month number (1-12): ");
    scanf("%d", &month);

    if      (month == 2)                                           printf("28 or 29 days\n\n");
    else if (month==4||month==6||month==9||month==11)              printf("30 days\n\n");
    else if (month >= 1 && month <= 12)                            printf("31 days\n\n");
    else                                                           printf("Invalid month\n\n");


    /* ── Position sum series ── */
    printf("=== Position Sum Series ===\n");
    /*
     * Series starts at 3.
     * Each next term = previous term + current position (i).
     * Position 1: 3
     * Position 2: 3 + 1 = 4
     * Position 3: 4 + 2 = 6
     * Position 4: 6 + 3 = 9 ...
     */
    int terms;
    printf("How many terms? ");
    scanf("%d", &terms);

    int val = 3;
    for (int i = 1; i <= terms; i++)
    {
        printf("%d ", val);
        val += i;
    }
    printf("\n");

    return 0;
}
