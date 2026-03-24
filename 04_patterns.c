#include <stdio.h>
int main()
{
    /* ── Q17: Right-angle star triangle ── */
    printf("=== Star Triangle ===\n");
    /*
     * Output:
     * *
     * **
     * ***
     * ****
     * *****
     */
    int r, c;
    for (r = 1; r <= 5; r++)
    {
        for (c = 1; c <= r; c++)
            printf("*");
        printf("\n");
    }
    printf("\n");


    /* ── Q25: Print your name 10 times ── */
    printf("=== Print Name 10 Times ===\n");
    int i;
    for (i = 1; i <= 10; i++)
        printf("SADAF\n");
    printf("\n");


    /* ── Input-based character pattern ── */
    printf("=== Input Character Pattern ===\n");
    /*
     * Input: n=4, chars = A B C D
     * Output:
     * A
     * AB
     * ABC
     * ABCD
     */
    char arr[50];
    int n;
    printf("Enter number of characters: ");
    scanf("%d", &n);
    printf("Enter %d characters: ", n);
    for (i = 0; i < n; i++)
        scanf(" %c", &arr[i]);

    for (i = 1; i <= n; i++)
    {
        int j;
        for (j = 0; j < i; j++)
            printf("%c", arr[j]);
        printf("\n");
    }
    printf("\n");


    /* ── Alphabet vowel toggle ── */
    printf("=== Vowel Toggle (lowercase vowels → uppercase, vice versa) ===\n");
    /*
     * Input : "hello"
     * Output: "hEllO"
     * Lowercase vowels become uppercase, uppercase vowels become lowercase.
     * Consonants are unchanged.
     */
    char word[100];
    printf("Enter a word: ");
    scanf("%s", word);

    for (i = 0; word[i] != '\0'; i++)
    {
        char ch = word[i];
        // lowercase vowel → uppercase
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
            word[i] = ch - ('a' - 'A');
        // uppercase vowel → lowercase
        else if (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
            word[i] = ch + ('a' - 'A');
    }
    printf("Result: %s\n", word);

    return 0;
}
