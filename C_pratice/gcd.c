#include<stdio.h>
int gcd(int x,int y);
int main()
{
    int a,b,c;
    printf("Enter two numbers\n");
    scanf("%d %d",&a,&b);
    c = gcd(a,b);
    printf("The result %d",c);
    return 0;
}

int gcd(int x,int y)
{
    int n;
    if(y != 0)
    return gcd(y , x % y);
    else
    return x;

}