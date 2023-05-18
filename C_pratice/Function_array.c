#include<stdio.h>
int func(int val[]);
int main()
{
    int i, arr[6]={1,2,3,4,5,6};
    func(arr);
    printf("The new array is : ");
    for(i=0 ; i<6 ; i++)
        printf("%d\t",arr[i]);
    printf("\n");
    return 0;
}

int func(int val[])
{
    int sum=0;
    for (int i = 0; i < 6; i++)
    {
      val[i] = val[i] *val[i];
      sum+=val[i];  
    }
    printf("The sum of the given array : %d\n",sum);
     
}