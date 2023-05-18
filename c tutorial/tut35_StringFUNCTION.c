#include<stdio.h>
#include<string.h>
int main()
{
    char s1[30],s2[30],s3[30],s4[30];
    printf("Enter the name of two friends\n");
    gets(s1);
    gets(s2);
    puts(strcpy(s3,s1));
    printf("The new string %s\n",s3);
    puts(strcpy(s4,s2));
    printf("The new string %s\n",s4);
    printf("The name of your two friends are %s and %s\n",s1,s2);
    printf("The combian name of your friends are %s\n",strcat(s1,s2));
    puts(strrev(s3));
    puts(strrev(s4));
    printf("The length of s3 is %d\n",strlen(s3));
    printf("The length of s4 is %d\n",strlen(s4));


    return 0; 
}