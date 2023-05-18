#include<stdio.h>
void main()
{
    float r,a,s;
    printf("Please enter the value of the radius: \n");
    scanf("%f", &r);
    a=3.14*r*r;
    s=2*3.14*r;
    printf("The area of the circle: %g\n",a);
    printf("The circumference of the circle: %g",s);
}