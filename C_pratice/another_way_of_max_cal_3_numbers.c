#include<stdio.h>
void main()
{
    float a,b,c,t,m;
    printf("Enter the three numbers a, b and c :");
    scanf("%f",&a);
    scanf("%f",&b);
    scanf("%f",&c);
    t=(a>b)?a:b;
    m=(t>c)?t:c;
    printf("Max= %g",t);
    printf("Max= %g",m);

}