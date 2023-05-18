#include<stdio.h>
void main()
{
    int r,n,s,num;
    printf("Enter the number = \n");
    scanf("%d",&n);
    num = n;
    s = 0;
    while (n>0)
    {
        /* code */
        r = n % 10;
        //printf("%d\n",r);
        n = n / 10;
        //printf("%d\n",n);
        s=s+r;
        //printf("%d\n",s);
    }
    printf("%d",s);
    
}