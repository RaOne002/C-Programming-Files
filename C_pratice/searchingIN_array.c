#include<stdio.h>
int main()
{
    int i,n,a[12]={1,2,3,4,5,6,7,8,9,12,14,16};
    printf("Enter the number you want to search\n");
    scanf("%d",&n);
    for ( i = 0; i < 12; i++)
    {
        if (n==a[i])
        {
            printf("%d is found at %d position",n,i+1);
            break;
        }
        
    }
    if (i==12)
    {
       printf("%d not found",n);
    }   
}