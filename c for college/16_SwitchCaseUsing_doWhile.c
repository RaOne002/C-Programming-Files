#include<stdio.h>
#include<stdlib.h>
void main()
{
    int i,a,b,c,d,e,g;
    float f;
    char ch;
    do
    {
        printf("Press\n 1 for addition\n 2 for substraction\n 3 for multification\n 4 for divition\n 5 for modulas\n ");
        scanf("%d",&i);
        printf("Enter the two numbers: \n");
        scanf("%d %d",&a,&b);
        switch(i)
        {
            case 1:
            c=a+b;
            printf("The result of addition: %d\n",c);
            break;
            case 2:
            d=a-b;
            printf("The result of substraction: %d\n",d);
            break;
            case 3:
            e=a*b;
            printf("The result of multification: %d\n",e);
            break;
            case 4:
            f=(float)a/b;
            printf("The result of divition: %f\n",f);
            break;
            case 5:
            g=a%b;
            printf("The result of modulas: %d\n",g);
            default:
            printf("You entered a wrong choice\n");

        }
        printf("Do you want to continue? y/n\n");
        fflush(stdin);
        scanf("%c",&ch);
    }while(ch=='Y' || ch=='y');

}