#include<stdio.h>
int fact (int);
void main()
{
    int n,f;
    printf("Enter a number : \n");
    scanf("%d",&n);
    f=fact(n);
    printf("Result : %d\n",f);
}
int fact (int n)
{
    int f=1;
    for(int i=1 ; i<=n ; i++ )
    f=f*i;
    return f;

}