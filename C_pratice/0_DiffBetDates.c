#include <stdio.h>
int main()
{
    int d1, d2, m1, m2, y1, y2;
    int leap = 0, m, y, d;
    printf("Enter the 1st year in dd/mm/yy format\n");
    scanf("%d%d%d", &d1, &m1, &y1);
    printf("Enter the 2nd year in dd/mm/yy format\n");
    scanf("%d%d%d", &d2, &m2, &y2);

    if (d2 < d1)
    {
        if (m2 == 3)
        {
            if (y2 % 4 == 0 && y2 % 100 != 0 || y2 % 400 == 0)
            {
                d2 = d2 + 29;
            }
            else
                d2 = d2 + 28;
        }
        else if (m2 == 5 || m2 == 7 || m2 == 10 || m2 == 12)
        {
            d2 = d2 + 30;
        }
        else
            d2 = d2 + 31;
    }
    if (m2 < m1)
    {
        y2 = y2 - 1;
        m2 = m2 + 12;
    }

    y = y2 - y1;
    m = m2 - m1;
    d = d2 - d1;
    printf("The difference between two date is : \n %d year %d month % d days\n", y, m, d);

    return 0;
}