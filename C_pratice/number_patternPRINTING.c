#include<stdio.h>
#include<stdlib.h>
void main()
{
    char ch;
    do
    {
        /* code */
        int r,i,j;
        printf("Enter how many rows of pattern you want to print = \n");
        scanf("%d",&r);
        for ( i = 1; i <= r; i++)
        {
            /* code */
        for ( j = 1; j <= i; j++)
        {
            /* code */
            printf("%d ",i);
        }
        printf("\n");
        }

        int n,x,y;
        printf("Enter how many reverse rows of pattern you want to print = \n");
        scanf("%d",&n);
        for ( x = n; x >= 1; x--)
        {
        /* code */
            for ( y = 1; y <= x; y++)
            {
            /* code */
                printf("%d ",x);
            }
            printf("\n");

        }

                /* code */
        int d,e,f;
        printf("Enter how many rows of pattern you want to print = \n");
        scanf("%d",&d);
        for ( e = 1; e <= d; e++)
        {
            /* code */
        for ( f = 1; f <= e; f++)
        {
            /* code */
            printf("%d ",f);
        }
        printf("\n");
        }

        int a,b,c;
        printf("Enter how many reverse rows of pattern you want to print = \n");
        scanf("%d",&a);
        for ( b = a; b >= 1; b--)
        {
        /* code */
            for ( c = 1; c <= b; c++)
            {
            /* code */
                printf("%d ",c);
            }
            printf("\n");

        }

        printf("Do you want to continue y/n = \n");
        fflush(stdin);
        scanf("%c",&ch);
    
    } while (ch=='Y' || ch=='y');
    
}