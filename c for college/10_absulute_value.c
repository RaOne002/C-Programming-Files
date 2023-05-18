#include<stdio.h>
void main()
{
    float a,b;
    printf("Please enter the number:\n");
    scanf("%g",&a);
    if(a<0)
    b=a*(-1);
    else b=a; 
    printf("The absolute value is: %g\n",b);
    
}