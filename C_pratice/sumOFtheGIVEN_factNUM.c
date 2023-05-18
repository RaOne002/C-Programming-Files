#include<stdio.h>
#include<math.h>
void main()
{
    float sum;
    int x,n,i,f=1;
    printf("Enter the value of X and N = \n");
    scanf("%d %d",&x,&n);
    // sum = x;
    for (int i = 2; i <= n; i+=2)
    {
        /* code */
        for (int j = 1; j <= i; j++)
        {
            /* code */
            f = f * j;
            sum = pow(x,i)/f;
        } 
    }
    printf("The sum of the seris is : %f",sum);
    
}