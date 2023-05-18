#include<stdio.h>
void main()
{
    float a,b,c,d,e,ava,per;
    printf("enter the number of math, english, bengali, science, drawing : \n");
    scanf("%f %f %f %f %f",&a,&b,&c,&d,&e);
    ava=(a+b+c+d+e)/500;
    per=ava*100;
    printf("Total persentage = %g\n",per);
    if(per>=90)
    printf("You get O");
    else if(per<90 && per>=80)
    printf("You get A");
    else if(per<80 && per>=70)
    printf("You get B");
    else if(per<70 && per>=60)
    printf("You get C");
    else if(per<60 && per>=50)
    printf("You get E");
    else
    printf("You get F");
}