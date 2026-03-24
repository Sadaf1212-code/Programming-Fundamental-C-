#include <stdio.h>

int main()
{
    /* ── String basics ── */
    printf("=== String Basics ===\n");
    char name[50];
    printf("Enter your name: ");
    scanf("%s", name);
    printf("Hello, %s!\n\n", name);


    /* ── Manual string length ── */
    printf("=== String Length (manual) ===\n");
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);
    int len = 0;
    while (str[len] != '\0') len++;
    printf("Length = %d\n\n", len);


    /* ── Vowel toggle ── */
    printf("=== Vowel Toggle ===\n");
    /*
     * Lowercase vowels (a,e,i,o,u) → UPPERCASE
     * Uppercase vowels (A,E,I,O,U) → lowercase
     * Consonants unchanged.
     * Example: "Hello World" → "hEllO wOrld"
     */
    char word[100];
    printf("Enter a word/sentence (no spaces): ");
    scanf("%s", word);

    for (int i = 0; word[i] != '\0'; i++)
    {
        char ch = word[i];
        if (ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
            word[i] = ch - ('a' - 'A');   // to uppercase
        else if (ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
            word[i] = ch + ('a' - 'A');   // to lowercase
    }
    printf("Result: %s\n\n", word);


    /* ── String reverse ── */
    printf("=== String Reverse ===\n");
    char rev[100];
    printf("Enter a string: ");
    scanf("%s", rev);
    int rLen = 0;
    while (rev[rLen] != '\0') rLen++;

    // Swap from both ends toward middle
    for (int i = 0; i < rLen / 2; i++)
    {
        char temp       = rev[i];
        rev[i]          = rev[rLen - 1 - i];
        rev[rLen - 1 - i] = temp;
    }
    printf("Reversed: %s\n\n", rev);


    /* ── Palindrome string check ── */
    printf("=== Palindrome String Check ===\n");
    char pal[100];
    printf("Enter a string: ");
    scanf("%s", pal);
    int pLen = 0;
    while (pal[pLen] != '\0') pLen++;

    int isPalin = 1;
    for (int i = 0; i < pLen / 2; i++)
    {
        if (pal[i] != pal[pLen - 1 - i])
        {
            isPalin = 0;
            break;
        }
    }
    printf(isPalin ? "\"%s\" is a Palindrome\n" : "\"%s\" is NOT a Palindrome\n", pal);

    return 0;
}
