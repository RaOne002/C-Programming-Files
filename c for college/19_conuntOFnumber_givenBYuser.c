#include<stdio.h>
void main()
{
    long int r,n,s,num;
    printf("Enter the number = \n");
    scanf("%ld",&n);
    num = n;
    s = 0;
    while (n>0)
    {
        /* code */
        r = n % 10;
        //printf("%d\n",r);
        n = n / 10;
        //printf("%d\n",n);
        s++;
        //printf("%d\n",s);
    }
    printf("%ld numbers are given by the user",s);
    
}