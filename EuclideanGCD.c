#include <stdio.h>

int main()
{
    int num1;
    int num2;

    printf("Euclidean Algorithm for Greatest Common Divisor:\n\n");

    printf("Enter an integer: ");
    scanf("%d", &num1);
    printf("Enter another integer: ");
    scanf("%d", &num2);

    int num1_org = num1;
    int num2_org = num2;

    int remainder = 0;
    int quotient = 0;
    while (num2 != 0) {
        remainder = num1 % num2;
        quotient = num1 / num2;

        printf("\n%d = %d * %d + %d", num1, quotient, num2, remainder);

        num1 = num2;
        num2 = remainder;
    }
    int gcd = num1;

    printf("\n\ngcd(%d, %d) = %d\n", num1_org, num2_org, gcd);

    return 0;
}
