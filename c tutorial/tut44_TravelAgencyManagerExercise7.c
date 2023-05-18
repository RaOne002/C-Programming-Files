#include <stdio.h>
struct driver
{
    char name[30];
    char driving_license[35];
    char route[33];
    float km;
} a[30];

int main()
{
    int n, b = 1;
    printf("Enter the total number of driver:  ");
    scanf("%d", &n);
    printf("******Fill up the below details******* \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d. Enter the name of the driver:\n", b);
        getchar();
        gets(a[i].name);
        printf("Enter the driving license no: \n");
        gets(a[i].driving_license);
        printf("Enter the route:\n");
        gets(a[i].route);
        printf("Enter how much you travel:\n");
        scanf("%f", &a[i].km);
        b++;
    }
    printf("\n\n");
    printf("*******The final list is************\n\n\n");
    for (int i = 0,b = 1; i < n; i++,b++)
    {
        printf("%d Name of the driver:\n", b);
        puts(a[i].name);
        printf("Driving lisense no:\n");
        puts(a[i].driving_license);
        printf("Roots name:\n");
        puts(a[i].route);
        printf("Total travel %0.2f km\n", a[i].km);
        printf("\n");
        
    }

    return 0;
}