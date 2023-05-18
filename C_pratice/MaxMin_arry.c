#include<stdio.h>
int main()
{
    int i,max,min,arr[6]={12,45,67,23,21,8};
    max=min=arr[0];
    for ( i = 0; i < 6; i++)
    {
        if (arr[i]<min)
        {
           min = arr[i];
        }
        if (arr[i]>max)
        {
            max = arr[i];
        }   
    }
    printf("Max = %d , Min = %d",max,min);
    return 0;
}