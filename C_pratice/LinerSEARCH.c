#include<stdio.h>
int main()
{
    int a[20],n,k,i,f=0;
    printf("Enter the range of array = \n");
    scanf("%d",&n);
    printf("Enter the eliment of array = \n");
    for ( i = 0; i < n; i++)
    scanf("%d",&a[i]);
    printf("Enter the element you want to search ?\n");
    scanf("%d",&k);
    for ( i = 0; i < n ; i++)
    {
        if (a[i]==k)
        {
            printf("Search successful\n");
            printf("The location %d",i+1);
            f = 1;
        }
        
    }
    if (f==0)
    {
        printf("Search is unsuccessful");
    }
   
}