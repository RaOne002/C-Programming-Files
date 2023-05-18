#include<stdio.h>
int func(int num,int b);
int main()
{
    int arr[20],num,i,a;
    printf("Enter the decimal number\n");
    scanf("%d",&num);
    printf("Converter press 1 to Binary 2 to Octal 3 to hexadimal\n");
    scanf("%d",&a);
    switch (a)
    {
        case 1:
        printf("Binary eqiuvqlent is :\n");
        func(num,2);
        break;

        case 2:
        printf("Octal eqiuvqlent is :\n");
        func(num,8);
        break;

        case 3:
        printf("Hexadecimal eqiuvqlent is :\n");
        func(num,16);
        break;
        default:
        printf("You entered a wrong choise");
        break;
    }
    printf("\n");
    return 0;  
}
int func( int num,int b)
{
    int i=0,j,rem;
    char arr[20];
    while (num>0)
        {
            rem  = num % b;
            num/=b;
            if(rem>9 && rem<16)
            arr[i++]=rem-10+'A';
            else 
            arr[i++]=rem+'O';  
        }
        for(int j = i-1; j>=0; j--)
        printf("%c",arr[j]); 
}
        