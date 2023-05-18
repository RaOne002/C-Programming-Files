#include<stdio.h>
int main()
{
    printf("File name is %s\n",__FILE__);
    printf("Today's date name is %s\n",__DATE__);
    printf("Today's time name is %s\n",__TIME__);
    printf("Line number is %d\n",__LINE__);
    return 0;
}