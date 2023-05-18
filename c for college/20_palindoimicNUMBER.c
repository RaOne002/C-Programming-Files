#include <stdio.h>
int main()
{
    int n, r, sum = 0, temp;
    printf("enter the number= \n");
    scanf("%d", &n);
    temp = n;
    while (n > 0)
    {
        r = n % 10;
        // printf("%d\n",r);
        n = n / 10;
        // printf("%d\n",n);
        sum = (sum * 10) + r;
        // printf("%d\n",sum);
    }
    printf("The reverse of the number is %d\n", sum);
    if (temp == sum)
        printf("%d is a palindrome number ", sum);
    else
        printf("%d is not a palindrome", sum);
    return 0;
}