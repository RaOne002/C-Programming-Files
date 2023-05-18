#include<stdio.h>
void main()
{
    int i,num;
    printf("Enter the number: \n");
    scanf("%d", &num);
    i=2;
    while(i<num)
    {
        if(num%i==0)
        {
            printf("%d It is not a prime number",num);
            break;
        }
        i++;       
    }
    if(num==i)
    printf("%d Is a prime number",num);

}