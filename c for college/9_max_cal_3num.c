#include<stdio.h>
void main()
{
    float a,b,c,max;
    printf("Please enter the 1st num: \n");
    scanf("%g",&a);
    printf("Please enter the 1st num: \n");
    scanf("%g",&b);
    printf("Please enter the 1st num: \n");
    scanf("%g",&c);
    max=a>b?(a>c?a:c):(b>c?b:c);
    printf("The largest num among %g, %g and %g is %g \n",a,b,c,max);
   

}