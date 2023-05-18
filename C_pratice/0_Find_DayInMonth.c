// #include <stdio.h>
// int main()
// {
//     int d, m, y, j, f, h, fh, day;
//     printf("Enter the day in dd/mm/yy format\n");
//     scanf("%d %d %d", &d, &m, &y);
//     j = d;
//     switch (m - 1)
//     {
//     case 11:
//         j += 30;
//     case 10:
//         j += 31;
//     case 9:
//         j += 30;
//     case 8:
//         j += 31;
//     case 7:
//         j += 31;
//     case 6:
//         j += 30;
//     case 5:
//         j += 31;
//     case 4:
//         j += 30;
//     case 3:
//         j += 31;
//     case 2:
//         j += 28;
//     case 1:
//         j += 31;
//     default:
//         break;
//     }
//     if (y % 4 == 0 && y % 100 != 0 || y % 400 == 0)
//     {
//         if (m != 1 && m != 2)
//         {
//             j = j + 1;
//         }
//     }
//     f = (y - 1) / 4;
//     h = (y - 1) / 100;
//     fh = (y - 1) / 400;
//     day = (y + j + f - h + fh) % 7;
//     switch (day)
//     {
//     case 0:
//         printf("Satarday\n");
//         break;
//     case 1:
//         printf("Sunday\n");
//         break;
//     case 2:
//         printf("Monday\n");
//         break;
//     case 3:
//         printf("Tuesday\n");
//         break;
//     case 4:
//         printf("Wednesday\n");
//         break;
//     case 5:
//         printf("Thusday\n");
//         break;
//     case 6:
//         printf("Friday\n");
//         break;
//     }
//     return 0;
// }

/* A program to find day of a given date */
#include <stdio.h>
int dayofweek(int d, int m, int y)
{
    static int t[] = {0, 3, 2, 5, 0, 3, 5, 1, 4, 6, 2, 4};
    y -= m < 3;
    return (y + y / 4 - y / 100 + y / 400 + t[m - 1] + d) % 7;
}
int main()
{
    int a, day, d, m, y;
    printf("Enter the day in dd/mm/yy format\n");
    scanf("%d %d %d", &d, &m, &y);
    a = dayofweek(d, m, y);
    switch (a)
    {
    case 1:
        printf("Monday\n");  break; 
    case 2:
        printf("Tuesday\n");  break;
    case 3:
        printf("Wednesday\n");  break;
    case 4:
        printf("Thusday\n");  break;
    case 5:
        printf("Friday\n");  break;
    case 6:
        printf("Satarday\n");  break;
    case 7:
        printf("Sunday\n");  break;
    }
    return 0;
}
