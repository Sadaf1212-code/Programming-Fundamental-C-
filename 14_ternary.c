#include <stdio.h>

int fun(int n) { return n * n; }

int main()
{
    /* ── Q1: Nested ternary ── */
    printf("=== Q1: Nested Ternary ===\n");
    /*
     * (a > b) → 5 > 10 → false
     *   → goes to: b > c ? b : c
     *   → 10 > 7 → true → result = 10
     */
    int a = 5, b = 10, c = 7;
    int result = (a > b) ? a : (b > c ? b : c);
    printf("result = %d   (expected: 10)\n\n", result);


    /* ── Q2: Ternary with side effect (+=) ── */
    printf("=== Q2: Ternary with Side Effect ===\n");
    /*
     * x += 2  → x becomes 5
     * (x > y) → 5 > 5 → false → z = y = 5
     * Output: x=5, y=5, z=5
     */
    int x = 3, y = 5;
    int z = (x += 2) > y ? x : y;
    printf("x=%d y=%d z=%d   (expected: 5 5 5)\n\n", x, y, z);


    /* ── Q3: Ternary with function call ── */
    printf("=== Q3: Ternary with Function Call ===\n");
    /*
     * a > b → 3 > 4 → false → call fun(b) = fun(4) = 16
     */
    int aa = 3, bb = 4;
    int res = (aa > bb) ? fun(aa) : fun(bb);
    printf("res = %d   (expected: 16)\n\n", res);


    /* ── Q4: Ternary in printf ── */
    printf("=== Q4: Ternary Inside printf ===\n");
    /*
     * num != 0 → 0 != 0 → false → "Zero"
     */
    int num = 0;
    printf("%s   (expected: Zero)\n\n",
           (num != 0) ? (num > 0 ? "Positive" : "Negative") : "Zero");


    /* ── Q5: Complex nested ternary with pre/post increment ── */
    printf("=== Q5: Complex Nested Ternary ===\n");
    /*
     * x > y → 2 > 3 → false
     *   → goes to: y < z ? ++y : z++
     *   → y < z → 3 < 4 → true → ++y (pre-increment) → y = 4, result = 4
     * x unchanged = 2, z unchanged = 4
     * Output: x=2, y=4, z=4, result=4
     */
    int px = 2, py = 3, pz = 4;
    int presult = px > py ? px++ : py < pz ? ++py : pz++;
    printf("x=%d y=%d z=%d result=%d   (expected: 2 4 4 4)\n",
           px, py, pz, presult);

    return 0;
}
