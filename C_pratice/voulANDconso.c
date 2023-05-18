#include <stdio.h>
int main()
{
    char c;
    printf("Enter your alphabet\n");
    scanf("%c", &c);
    if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
    {
        printf("This is a voul");
    }
    else
        printf("This is a consonent");

    return 0;
}