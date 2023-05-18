#include<stdio.h>
int sum(int x, int y);
int printstar(int n);
{
    for(int i = 0; i < n; i++)
    {
        int f;
        printf("Enter how many star you want to print = \n");
        scanf("%d",&f);
        printf("%c", '*'*f);
        return f
    } 
}

void main()
{

int a,b,d,f,g;
d = sum(a,b);
printf("the sum is = %d\n",d);
f = printstar(g);
printf("the patten = %c\n",f);



}


int sum(int x, int y)
{
    int a, b, c;
    printf("Please enter the 1st num = \n");
    scanf("%d",&a);
    printf("Please enter the 2nd num = \n");
    scanf("%d",&b);
    c = a+b;
    return c;
}

// int star(int z)
// {
//     int f, i;
//     printf("Enter how many star you want to print = \n");
//     scanf("%c",&f);
//     for (i=0 ; i<f ; i++)
//     {
//         printf("%c\n",'*');
//     }
//     return f;
    
// }