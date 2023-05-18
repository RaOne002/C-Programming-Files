// CHeck enter date is valid or not between 1850 to 2050

#include<stdio.h>
int main()
{
    int d,m,y;
    int leap = 0,f = 1;
    printf("Enter the date in dd/mm/yy formar\n");
    scanf("%d %d %d",&d,&m,&y);
    if (y % 4 == 0 && y % 100 != 0 || y % 400 == 0)
    {
        leap = 1;
    }
    else if (y < 1850 || y > 2050)
    {
        f = 0;
    }
    else if (m < 1 || m > 12)
    {
        f = 0;
    }
    else if (d < 1)
    {
        f = 0;
    }
    else if (m == 2)
    {
        if (d > 28)
        {
            f = 0;
        }
        else if (d == 29 && leap)
        {
            f = 1;
        }   
    }
    else if (m == 4 || m == 6 || m == 9 || m == 11)
    {
        if (d > 30)
        {
            f = 0;
        }
        
    }
    else if (d > 31)
    {
        f = 0;
    }
    
    if (f == 0)
    {
        printf("Entered date %d/%d/%d is invalid\n",d,m,y);
    }
    else
    printf("Entered date %d/%d/%d is valid\n",d,m,y);
    
    return 0;
}