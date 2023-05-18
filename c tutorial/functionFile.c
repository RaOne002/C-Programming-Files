#include<stdio.h>
int main()
{
    FILE* ptr = NULL;
    char str[20] = "Hello";
    // ptr = fopen("somu.txt","r");
    // fscanf(ptr, "%s", str);
    // printf("Your details : \n%s",str);
    
    // ptr = fopen("somu.txt","r+");
    // fprintf(ptr, "%s", str);
    // printf("\nHello");
    
    ptr = fopen("somu.txt","a");
    fprintf(ptr, "\n%s", str);
    return 0;
}