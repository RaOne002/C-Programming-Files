#include<stdio.h>
void main()
{
    float a,b,c,i;
    printf("Enter the principal amount: \n");
    scanf("%g",&a);
    printf("Enter the time: \n");
    scanf("%g",&b);
    printf("Enter the rate of interest: \n");
    scanf("%g",&c);
    i=(a*b*c)/100;
    printf("The simple interest: %g",i);

}