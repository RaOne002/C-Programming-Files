#include<stdio.h>
void main()
{
    float a,b,c;
    printf("Enter the three numbers a, b and c :");
    scanf("%f",&a);
    scanf("%f",&b);
    scanf("%f",&c);
    if(a>b && a>c){
        printf("Max= %g",a);
    }
    else{
        if(b>c){
            printf("Max= %g",b);
        }
        else{
            printf("Max= %g",c);
        }
    }
}