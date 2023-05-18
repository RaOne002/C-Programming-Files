#include<stdio.h>
int add(int arr[],int n);
int main()
{
    int a[5] = {1,2,3,4,5};
    int b[8] = {1,2,3,4,5,6,7,8};
    int c[10] = {1,2,3,4,5,6,7,8,9,10};
    printf("%d\n",add(a,5));
    printf("%d\n",add(b,8));
    printf("%d\n",add(c,10));
    return 0;
}

int add(int arr[],int n)
{
    int i,sum;
    for (int i = 0; i < n; i++)
        sum+=arr[i];
    return sum;   
}