//   *********** Employee Manager Exercise ********
#include <stdio.h>
#include <stdlib.h>
int main()
{
    char *ptr;
    int n, i = 0, m;
    printf("Enter the number of the employee\n");
    scanf("%d",&m);
    while (i < m)
    {
        printf("Employee %d :Enter the length of your employee id\n",i+1);
        scanf("%d", &n);
        ptr = (char *)calloc(n, sizeof(char));
        printf("Enter your employee id\n");
        getchar();
        gets(ptr);
        printf("Your employee id is ");
        puts(ptr);
        i++;
    }
    free(ptr);
    return 0;
}