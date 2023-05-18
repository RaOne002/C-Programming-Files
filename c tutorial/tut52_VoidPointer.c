#include <stdio.h>
int main()
{
    int a = 1233;
    float b = 12.33;
    void *ptr;
    ptr = &a;
    printf("The value of a is : %d\n", *((int *)ptr));
    ptr = &b;
    printf("The value of b is : %0.2f\n", *((float *)ptr));
    return 0;
}