#include<stdio.h>
void main()
{
    float c,f;
    printf("Please enter the temperature in celsius: \n");
    scanf("%f", &c);
    f=(9*c+160)/5;
    printf("The converted temperature in fahrenheit: %g\n ",f);
    printf("Please enter the temprature in fahrenheit: \n");
    scanf("%f", &f);
    c=(5*f-160)/9;
    printf("The convarted temperature in celsius: %g",c);

}