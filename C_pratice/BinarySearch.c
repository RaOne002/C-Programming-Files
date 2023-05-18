#include <stdio.h>
int main()
{
    int a[20], n, i, item, start, mid, end;
    printf("Enter the length of arry\n");
    scanf("%d", &n);
    printf("Enter the element of arry in sorted order\n");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    printf("Enter the number you want to search ?\n");
    scanf("%d", &item);
    start = 0;
    end = n - 1;
    mid = (start + end) / 2;
    while (item != a[mid] && start <= end)
    {
        if (a[mid] < item)
            start = mid + 1;
        else
            end = mid - 1;
        mid = (start + end) / 2;
    }
    if (item == a[mid])
    {
        printf("Search is successful\n");
        printf("Location is %d", mid + 1);
    }
    if (start > end)
        printf("Search is unsuccessful");
    return 0;
}
