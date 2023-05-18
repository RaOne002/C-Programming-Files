#include <stdio.h>
int main()
{
    int x, y, s = 0, a, b;
    printf("Enter the two numbers you want to multiply\n");
    scanf("%d %d", &x, &y);
    a = x;
    b = y;
    while (x >= 1)
    {
        if (x % 2 != 0)
        {
            s = s + y;
        }
        x /= 2;
        y *= 2;
    }
    printf("The value is %d X %d = %d", a, b, s);

    return 0;
}