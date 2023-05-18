#include<stdio.h>
void main()
{
    int a = 0,b = 1,c,n,i;
    printf("Enter how many fibonachi number you want to print = \n");
    scanf("%d",&n);
    printf("%d      %d\t",a,b);
    for(i=1;i<=n-2;i++)
    {
        c = a+b;
        printf("%d\t",c);
        a = b;
        b = c;
    }
    
}