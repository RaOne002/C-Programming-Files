#include<stdio.h>
int main(int argc, char const *argv[])
{
    printf("The value of argument is %d\n",argc);
    for (int i = 0; i < argc; i++)
    {
        printf("The argument at index no %d has a value of %s\n",i,argv[i]);
    }
    
    return 0;
}
