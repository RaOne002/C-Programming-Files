// #include <stdio.h>

// void printStr(char str[])
// {
//     int i=0;
//     while(str[i]!='\0')
//     {
//         printf("%c", str[i]);
//         i++;
//     }
//     printf("\n");
// }
// int main()
// {
//     // char str[] = {'h', 'a', 'r', 'r', 'y', '\0'};
//     // char str[6] = "harry";
//     char str[34];
//     gets(str);
//     printf("Using custom function printStr\n");
//     printStr(str);
//     printf("Using printf %s\n", str);
//     printf("using puts: \n");
//     puts(str);
//     return 0;
// }


#include<stdio.h>
int main()
{
    char s[] = "Hello moto";
    char str[30];
    printf("Enter the string\n");
    gets(str);
    printf("you type: %s\n",str);
    printf("you type: %s",s);
    return 0;
}
