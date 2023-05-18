#include<stdio.h>
typedef struct student
{
    char name[30];
    int id;
    float marks;
}sts;

void main()
{
    sts s1,s2;
    s1.id = 1;
    s2.id = 2;
    printf("The value of s1 %d\n",s1.id);
    printf("The value of s2 %d\n",s2.id);


    typedef int* intp;
    int* a;
    intp b,d;
    int c = 12;
    a = &c;
    b = &c;
    d = &c;
    printf("Address of a is %d\n",a);
    printf("Address of b is %d\n",b);
    printf("Address of b is %d\n",d);
}
