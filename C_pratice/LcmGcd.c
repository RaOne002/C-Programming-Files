#include <stdio.h>
void main()
{
    int x, y, a, b;
    printf("Enter two numbers\n");
    scanf("%d %d", &x, &y);
    a = x;
    b = y;
    while (a != b)
    {
        if (a < b)
            a = a + x;
        else
            b = b + y;
    }
    printf("LCM of %d and %d is : %d\n", x, y, a);
    a = x;
    b = y;
    while (a != b)
    {
        if (a > b)
            a = a - b;
        else
            b = b - a;
    }
    printf("GCD of %d and %d is : %d\n", x, y, a);
}