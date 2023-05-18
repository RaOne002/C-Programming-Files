#include<stdio.h>
int fib(int);
void main()
{
    int a = 0,b = 1,c,n,i;
    printf("Enter how many fibonachi number you want to print = \n");
    scanf("%d",&n);
    printf("%d      \t",a);
    for(i=1;i<=n-1;i++)
    printf("%d\t",fib(i));

}
int fib(int x)
{
    if(x==0 || x==1)
    return x;
    else
    return(fib(x-1)+fib(x-2));
}