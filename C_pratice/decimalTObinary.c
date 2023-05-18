#include<stdio.h>
int main()
{
    int arr[20],num,i;
    printf("Enter the decimal number\n");
    scanf("%d",&num);
    i=0;
    while (num>0)
    {
        arr[i] = num % 2;
        num/=2;
        i++;
    }
    printf("Binary number =  ");
    for(int j = i-1; j>=0; j--)
    printf("%d",arr[j]);
    printf("\n");    
}