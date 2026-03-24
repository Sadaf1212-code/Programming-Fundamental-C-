
#include <stdio.h>
struct Student
{
    char  name[50];
    int   roll;
    float cgpa;
};

/*
 * ── struct vs union (concept summary) ──
 *
 * struct:
 *   - Each member has its OWN memory.
 *   - Total size = sum of all members (+ padding).
 *   - All members can be used AT THE SAME TIME.
 *   - Use when you need all fields together.
 *   Example: Employee (name + id + salary all needed at once).
 *
 * union:
 *   - All members SHARE the same memory.
 *   - Total size = size of the LARGEST member only.
 *   - Only ONE member holds a valid value at a time.
 *   - Changing one member OVERWRITES the others.
 *   - Use to save memory when only one field is needed at a time.
 *   Example: A variable that can be either int OR float OR char.
 */

/* ── union definition ── */
union Data
{
    int   i;
    float f;
    char  c;
};


int main()
{
    /* ── struct: student records ── */
    printf("=== Student Records (struct) ===\n");
    int n;
    printf("Enter number of students: ");
    scanf("%d", &n);

    struct Student s[n];
    float totalCgpa = 0;

    for (int i = 0; i < n; i++)
    {
        printf("\nStudent %d:\n", i + 1);
        printf("  Name: ");
        scanf("%s", s[i].name);
        printf("  Roll: ");
        scanf("%d", &s[i].roll);
        printf("  CGPA: ");
        scanf("%f", &s[i].cgpa);
        totalCgpa += s[i].cgpa;
    }

    printf("\n--- Student Details ---\n");
    for (int i = 0; i < n; i++)
    {
        printf("Student %d | Name: %-15s | Roll: %d | CGPA: %.2f\n",
               i + 1, s[i].name, s[i].roll, s[i].cgpa);
    }
    printf("Average CGPA: %.2f\n\n", totalCgpa / n);


    /* ── union: data example ── */
    printf("=== Union Data Example ===\n");
    /*
     * Notice: after assigning d.c = 'A', printing d.i gives
     * a garbage/overwritten value — because all members share
     * the same memory location.
     */
    union Data d;

    d.i = 10;
    printf("d.i = %d\n", d.i);

    d.f = 5.5f;
    printf("d.f = %.2f\n", d.f);
    printf("d.i after setting d.f = %d (overwritten!)\n", d.i);

    d.c = 'A';
    printf("d.c = %c\n", d.c);
    printf("d.i after setting d.c = %d (overwritten!)\n\n", d.i);


    /* ── struct: memory size ── */
    printf("=== Size Comparison ===\n");
    printf("sizeof(struct Student) = %zu bytes\n", sizeof(struct Student));
    printf("sizeof(union Data)     = %zu bytes  (only largest member: float = 4)\n",
           sizeof(union Data));

    return 0;
}
