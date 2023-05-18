#include<stdio.h>
int sum (int a, int b)
{
    return a + b;   
}
int main()
{
    int c;
    c = sum(3,4);
    printf("The sum is %d\n",c);

    int (*fptr) (int , int);
    fptr = &sum;
    int d = (*fptr) (4,5);
    printf("The new sum is %d",d);

    return 0;
}