/*
exe of harry

Input:
<h1> This is a heading </h1> 

Output:
This is a heading
*/

#include <stdio.h>
#include<string.h>
void parser(char string[40])
{
    int n = strlen(string);
    for (int i = 5; i < n-5; i++)
    {
        printf("%c",string[i]);
    }  
};


int main()
{
    char string[] = "<h1> This is a heading </h1>";
    parser(string);
    return 0;
}

