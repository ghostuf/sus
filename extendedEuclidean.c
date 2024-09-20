#include <stdio.h>

int main()
{
    int num1;
    int num2;
    int quotient;
    int remainder;

    int s1 = 1;
    int s2 = 0;
    int t1 = 0;
    int t2 = 1;

    int s, t, x, y;
    int a = 0;
    int b = 0;

    printf("Enter a number: ");
    scanf("%d", &num1);
    printf("Enter another number: ");
    scanf("%d", &num2);

    x = a;
    y = b;

    while (b != 0) {
        quotient = num1 / num2;
        remainder = num1 % num2;

        s = s1 - quotient * s2;
        t = t1 - quotient * t2;

        num1 = num2;
        num2 = remainder;

        s1 = s2;
        s2 = s;

        t1 = t2;
        t2 = t;
    }

    printf("GCD = %d\n", num1);
    printf("%d = %d * %d + %d * %d\n", num1, s1 , x , t1 , y);

    return 0;
}
