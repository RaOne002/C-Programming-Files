#include <stdio.h>

void revarr(int* array)
{
    for(int j=3;j>=0;j--)
    {
        printf("%d\n",array[j]);

    }
    
}
int main()
{
    int marks[4] = {1,2,3,4};
    printf("The arry is\n");
    for(int i=0;i<=3;i++)
    {
        printf("%d\n",marks[i]);  
    }
    printf("The reverse arry is\n");
    revarr(marks);

    
    return 0;
}