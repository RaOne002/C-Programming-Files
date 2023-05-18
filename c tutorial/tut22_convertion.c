#include<stdio.h>
#include<stdlib.h>
void main()
{
    int i;
    float a,c,d,e,g,f;
    char ch;
    do
    {
        printf("Press\n 1 to convert KM to mile \n 2 to convert inchis to foot\n 3 to convert cm to inchis\n 4 to convert pound to KG\n 5 to convert inchis to miter\n ");
        scanf("%d",&i);
        printf("Give your input: \n");
        scanf("%f",&a);
        switch(i)
        {
            case 1:
            c=a*0.621;
            printf("The result : %f\n",c);
            break;
            case 2:
            d=a*0.0833;
            printf("The result : %f\n",d);
            break;
            case 3:
            e=a*0.394;
            printf("The result : %f\n",e);
            break;
            case 4:
            f=a*0.454;
            printf("The result : %f\n",f);
            break;
            case 5:
            g=a*0.0254;
            printf("The result : %f\n",g);
            default:
            printf("You entered a wrong choice\n");

        }
        printf("Do you want to continue? y/n\n");
        fflush(stdin);
        scanf("%c",&ch);
    }while(ch=='Y' || ch=='y');

}