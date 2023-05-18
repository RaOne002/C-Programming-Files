#include<stdio.h>
int ava (int a, int b)
{
    int c;
    printf("Enter the value of a\n");
    scanf("%d",&a);
    printf("Enter the value of b\n");
    scanf("%d",&b);
    c = (a+b)/2;
    printf("The avarage is %d\n",c);
    return c;  
}

void greeetingAfternoom(int (*fptr) (int, int))
{
    int a,b;
    printf("Hello user good Afternoon\n");
    int d = fptr(a,b);
    
}

void greeetingEvening(int (*fptr) (int, int))
{
    int a,b;
    printf("Hello user good Evening\n");
    int d = fptr(a,b);
    
}

int main()
{
    int (*ptr) (int, int);
    ptr = ava;
    greeetingAfternoom(ptr);
    int (*p) (int,int);
    printf("\n\n\n");
    p = ava;
    greeetingEvening(p);
    return 0;
}