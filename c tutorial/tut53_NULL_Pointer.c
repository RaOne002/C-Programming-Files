#include<stdio.h>
int main()
{
    int a = 233;
    int* ptr = &a;
    printf("The adress of a is : %d\n",ptr);
    printf("The value of a is : %d\n",*ptr);
    int* pt = NULL;
    if (pt != NULL)
    {
        printf("The value of a is : %d\n",*pt);
    }
    else
        printf("Sorry it is a NULL pointer and cannot be dereferenced\n");
    
    return 0;
}