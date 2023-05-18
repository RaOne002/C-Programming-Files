// Swap the value of the variable using thoes variables

#include<stdio.h>
void main()
{
    float a,b;
    printf("Please enter 1st variable\n");
    scanf("%g",&a);
    printf("Please enter 2nd variable\n");
    scanf("%g",&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("The value of the 1st variable: %g\n",a);
    printf("The value of the 2nd variable: %g\n",b);


}