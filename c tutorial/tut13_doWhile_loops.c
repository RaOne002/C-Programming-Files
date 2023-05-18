#include<stdio.h>
void main()
{
    int a,b=1,num;
    printf("Enter the number of the table you want to print = \n");
    scanf("%d",&a);
    do
    {
        num = a*b;
        printf(" %d X %d = %d\n",a,b,num);
        b=b+1;

    }while(num<a*10);
}