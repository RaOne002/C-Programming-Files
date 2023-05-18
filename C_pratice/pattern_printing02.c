#include<stdio.h>
#include<stdlib.h>
void main()
{
    char ch;
    int r,i,j;
    do
    {
        /* code */
        printf("Enter how many rows of pattern you want to print = \n");
        scanf("%d",&r);
        for ( i = 1; i <= r; i++)
        {
            /* code */
            for ( j = 1; j <= i ; j++)
            {
                printf("* ");
                
            }printf("\n");
            
        }
        printf("Do you want to continue y/n = \n");
        fflush(stdin);
        scanf("%c",&ch);
    
    } while (ch=='Y' || ch=='y');
    
}



/////////     THE CODE MUST BE REVIEWED.