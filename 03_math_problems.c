#include <stdio.h>
#include <math.h>

int main()
{
    /* ── Q11: Area of triangle using 3 sides (Heron's formula) ── */
    printf("=== Q11: Area of Triangle (3 sides) ===\n");
    int a, b, c;
    double s, area;
    printf("Enter three sides: ");
    scanf("%d %d %d", &a, &b, &c);
    s    = (a + b + c) / 2.0;
    area = sqrt(s * (s - a) * (s - b) * (s - c));
    printf("Area = %.2lf\n\n", area);


    /* ── Q12: Area of circle using radius ── */
    printf("=== Q12: Area of Circle ===\n");
    #define PI 3.1416
    int r;
    printf("Enter radius: ");
    scanf("%d", &r);
    printf("Area = %.2lf\n\n", PI * r * r);


    /* ── Q15: BMI Calculator ── */
    printf("=== Q15: BMI Calculator ===\n");
    float weight, height, bmi;
    printf("Enter weight (kg): ");
    scanf("%f", &weight);
    printf("Enter height (meters): ");
    scanf("%f", &height);
    bmi = weight / (height * height);
    printf("Your BMI = %.2f\n", bmi);
    if      (bmi < 18.5)                    printf("Status: Underweight\n\n");
    else if (bmi >= 18.5 && bmi <= 24.9)    printf("Status: Normal weight\n\n");
    else if (bmi >= 25.0 && bmi <= 29.9)    printf("Status: Overweight\n\n");
    else                                    printf("Status: Obese\n\n");


    /* ── Q18: Celsius to Fahrenheit ── */
    printf("=== Q18: Celsius to Fahrenheit ===\n");
    int cel, fahr;
    printf("Enter Celsius: ");
    scanf("%d", &cel);
    fahr = (9 * cel) / 5 + 32;
    printf("Fahrenheit = %d\n\n", fahr);


    /* ── Q18b: Fahrenheit to Celsius ── */
    printf("=== Q18b: Fahrenheit to Celsius ===\n");
    float f, cels;
    printf("Enter Fahrenheit: ");
    scanf("%f", &f);
    cels = (f - 32) * 5.0 / 9.0;
    printf("Celsius = %.2f\n\n", cels);


    /* ── Q20: Square root of a number ── */
    printf("=== Q20: Square Root ===\n");
    float x, num;
    printf("Enter a number: ");
    scanf("%f", &num);
    printf("Square root = %.4f\n\n", sqrt(num));


    /* ── Q21: Find third angle of a triangle ── */
    printf("=== Q21: Third Angle of Triangle ===\n");
    float a1, a2, a3;
    printf("Enter first two angles: ");
    scanf("%f %f", &a1, &a2);
    a3 = 180.0 - (a1 + a2);
    printf("Third angle = %.2f\n\n", a3);


    /* ── Q22: Swap two numbers WITHOUT temp variable ── */
    printf("=== Q22: Swap Without Temp ===\n");
    int p, q;
    printf("Enter two numbers: ");
    scanf("%d %d", &p, &q);
    p = p + q;
    q = p - q;
    p = p - q;
    printf("After swap: a = %d, b = %d\n\n", p, q);


    /* ── Q23: Calculator using switch-case ── */
    printf("=== Q23: Calculator ===\n");
    char op;
    int n1, n2;
    printf("Enter operator (+, -, *, /): ");
    scanf(" %c", &op);
    printf("Enter two numbers: ");
    scanf("%d %d", &n1, &n2);

    switch (op)
    {
        case '+': printf("Result = %d\n\n", n1 + n2); break;
        case '-': printf("Result = %d\n\n", n1 - n2); break;
        case '*': printf("Result = %d\n\n", n1 * n2); break;
        case '/':
            if (n2 == 0) printf("Error: division by zero\n\n");
            else         printf("Result = %d\n\n", n1 / n2);
            break;
        default: printf("Unknown operator\n\n");
    }


    /* ── Q27: Quadratic equation ── */
    printf("=== Q27: Quadratic Equation (ax2 + bx + c = 0) ===\n");
    float qa, qb, qc, d, root1, root2, realP, imagP;
    printf("Enter a, b, c: ");
    scanf("%f %f %f", &qa, &qb, &qc);
    d = qb * qb - 4 * qa * qc;

    if (d > 0)
    {
        root1 = (-qb + sqrt(d)) / (2 * qa);
        root2 = (-qb - sqrt(d)) / (2 * qa);
        printf("Two real roots: %.2f and %.2f\n\n", root1, root2);
    }
    else if (d == 0)
    {
        root1 = -qb / (2 * qa);
        printf("One repeated root: %.2f\n\n", root1);
    }
    else
    {
        realP = -qb / (2 * qa);
        imagP = sqrt(-d) / (2 * qa);
        printf("Complex roots: %.2f + %.2fi and %.2f - %.2fi\n\n",
               realP, imagP, realP, imagP);
    }


    /* ── Q28: Positive, negative, or zero ── */
    printf("=== Q28: Positive / Negative / Zero ===\n");
    int num2;
    printf("Enter a number: ");
    scanf("%d", &num2);
    if      (num2 > 0) printf("%d is Positive\n", num2);
    else if (num2 < 0) printf("%d is Negative\n", num2);
    else               printf("The number is Zero\n");

    return 0;
}
