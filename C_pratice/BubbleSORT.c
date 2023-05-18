#include<stdio.h>
int main()
{
    int arr[20],num,x,y,temp;
    printf("Plsease enter the number of array you want to print\n");
    scanf("%d",&num);
    printf("Enter the value\n");
    for ( x = 0; x < num; x++)
    {
        scanf("%d",&arr[x]);
    }
    for ( x = 0; x < num-1; x++)
    {
        for ( y = 0; y < num-1-x; y++)
        {
            if (arr[y]>arr[y+1])
            {
                temp=arr[y];
                arr[y] = arr[y+1];
                arr[y+1] = temp;
            }
            
        }
        
    }
    printf("The sort list \n");
    for ( x = 0; x < num; x++)
    {
        printf("%d\t",arr[x]);
    }
    return 0;
}