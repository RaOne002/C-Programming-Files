// #include<stdio.h>
// int main()
// {
// int n,r,sum=0,temp;
// printf("enter the number= \n");
// scanf("%d",&n);
// temp=n;
// while(n>0)
// {
// r=n%10;
// printf("%d\n",r);
// sum=(sum*10)+r;
// printf("%d\n",sum);
// n=n/10;
// printf("%d\n",n);
// }
// if(temp==sum)
// printf("%d palindrome number ",sum);
// else
// printf("%d not palindrome",sum);
// return 0;
// }

// #include<stdio.h>
// int check(int x);
// void main()
// {
//     int arr[10],i;
//     printf("Enter the array elements ");
//     for(i=0;i<10;i++)
//     {
//         scanf("%d",&arr[i]);
//         check (arr[i]);
//     }
// }

// check (int num)
// {
//     if (num%2==0)
//     printf("%d is even\n",num);
//     else
//     printf("%d is odd\n", num) ;
// }

// #include<stdio.h>
// int main()
// {
//     int a,b,c;
//     printf("Hello world\n");
//     c = 6 % 3;
//     a = 4;
//     a-=2;
//     printf("%d",c);
//     printf("%d",a);
//     return 0;
// }

// Example for Two-Dimensional Array :
#include <stdio.h>
int main()
{
    // Two dimensional array
    int Matrice[3][3];
    printf("This Program will print no. from 1-9 in matrice form : \n\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Enter no. (1-9) : ");
            scanf("%d", &Matrice[i][j]);
        }
    }
    printf("\n\n\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d\t", Matrice[i][j]);
        }
        printf("\n");
    }
    printf("\n\n\n So that's the matrice form of no from 1-9");
    return 0;
}