#include<stdio.h>
void main()
{
    float a,b,c;
    printf("Enter the three numbers a, b and c :");
    scanf("%f",&a);
    scanf("%f",&b);
    scanf("%f",&c);
    (a>b)?(a>c)? printf("Max= %g",a): printf("Max= %g",c):(b>c)? printf("Max= %g",b):printf("Max= %g",c);

}