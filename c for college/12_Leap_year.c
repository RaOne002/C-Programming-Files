#include<stdio.h>
void main()
{
    int a;
    printf("Please enter the year: ");
    scanf("%d",&a);
    if(a%100==0){
        if(a%400==0)
        printf("It is a leap year");
        else
        printf("It is not a leap year");
    }
    else{
        if(a%4==0)
        printf("It is a leap year");
        else
        printf("It is not a leap year");
    }
}