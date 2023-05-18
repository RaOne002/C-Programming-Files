// swap the value of the two variables using 3rd variable.
#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Please enter the value of the 1st variable\n");
    scanf("%d",&a);
    printf("Please enter the value of the 2st variable\n");
    scanf("%d",&b);
    c=a;
    a=b;
    b=c;
    printf("The value of the 1st variable: %d\n",a);
    printf("The value of the 2nd variable: %d",b);
    return 0;

    
}