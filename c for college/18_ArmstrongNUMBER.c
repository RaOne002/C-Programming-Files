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
        s = s+(r*r*r);
        //printf("%d\n",s);
    }
    if (s==num)
    {
        /* code */
        printf("%d is a armstrong number",num);
    }
    else
        printf("%d is not a armstrong number",num);
    
}