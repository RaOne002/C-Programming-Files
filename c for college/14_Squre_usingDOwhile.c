#include<stdio.h>
#include<stdlib.h>
void main()
{
    int a,b;
    char ch;
    do
        {
            printf("Enter the number: \n");
            scanf("%d",&a);
            b=a*a;
            printf("The squre of the number %d is: %d\n",a,b);

            printf("DO you want to continue? y/n\n");
            fflush(stdin);
            scanf("%c",&ch);
        }while(ch=='Y' || ch=='y');
}