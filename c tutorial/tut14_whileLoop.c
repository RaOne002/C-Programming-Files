#include<stdio.h>
void main()
{
    int a,b=1,num;
    printf("Enter the number of table you want to print = \n");
    scanf("%d",&a);
    while(num<a*10)
    {
        num=a*b;
        printf("%d X %d = %d \n",a,b,num);
        b=b+1;
    }
}