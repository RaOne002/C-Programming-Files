#include<stdio.h>
int main()
{
    int arr[20],x,y,key,num;
    printf("Plsease enter the number of array you want to print\n");
    scanf("%d",&num);
    printf("Enter the value\n");
    for ( x = 0; x < num; x++)
    {
        scanf("%d",&arr[x]);
    }
    for ( y = 1 ; y < num; y++)
    {
        key = arr[y];
        x = y-1;
        while (x>=0 && arr[x]>key)
        {
            arr[x+1] = arr[x];
            x = x-1;
        }
        arr[x+1] = key;  
    }
    printf("The sort list \n");
    for ( x = 0; x < num; x++)
    {
        printf("%d\t",arr[x]);
    }
    return 0;
}