#include <stdio.h>
int main()
{
    int arr[20], num, min, x, y, loc, t;
    printf("Plsease enter the number of array you want to print\n");
    scanf("%d", &num);
    printf("Enter the value\n");
    for (x = 0; x < num; x++)
    {
        scanf("%d", &arr[x]);
    }
    for (x = 0; x < num; x++)
    {
        min = arr[x];
        loc = x;
        for (y = x + 1; y < num; y++)
        {
            if (arr[y] < min)
            {
                min = arr[y];
                loc = y;
            }
        }
        if (loc != x)
        {
            t = arr[x];
            arr[x] = arr[loc];
            arr[loc] = t;
        }
    }
    printf("The sort list \n");
    for (x = 0; x < num; x++)
    {
        printf("%d\t", arr[x]);
    }
    return 0;
}