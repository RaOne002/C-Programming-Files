// Use of switch satement
 
#include<stdio.h>
void main()
{
    int age;
    printf("Please enter your age : \n");
    scanf("%d", &age);
    
    switch (age)
    {
        case 8:
            printf("Your age is 8\n");
            break;
        case 18:
            printf("Your age is 18\n");
            break;
        case 80:
            printf("Your age is 80\n");
            break;
        default:
            printf("Nothing is matching\n");
        
    }
}