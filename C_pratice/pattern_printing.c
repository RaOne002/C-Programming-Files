#include <stdio.h>
#include <stdlib.h>
void main()
{
    char ch;
    int r, i, j;
    do
    {
        /* code */
        printf("Enter how many rows of pattern you want to print = \n");
        scanf("%d", &r);
        for (i = 1; i <= r; i++)
        {
            /* code */
            for (j = 1; j <= i; j++)
            {
                /* code */
                printf("* ");
            }
            printf("\n");
        }

        int n, x, y;
        printf("Enter how many reverse rows of pattern you want to print = \n");
        scanf("%d", &n);
        for (x = n; x >= 1; x--)
        {
            /* code */
            for (y = 1; y <= x; y++)
            {
                /* code */
                printf("* ");
            }
            printf("\n");
        }
        printf("Do you want to continue y/n = \n");
        fflush(stdin);
        scanf("%c", &ch);

    } while (ch == 'Y' || ch == 'y');
}
