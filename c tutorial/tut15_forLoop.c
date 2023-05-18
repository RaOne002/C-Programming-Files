#include<stdio.h>
void main()
{
    int a,b,num;
    printf("Enter the number of table you want to print = \n");
    scanf("%d",&a);
    for(b=1; num<a*10; b++)
    {
        num=a*b;
        printf("%d X %d = %d \n",a,b,num);

    }
}