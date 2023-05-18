#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *ptr;
    int n, i;
    // ********Use of malloc ********
    ptr = (int *)malloc(n * sizeof(int));
    printf("Enter the size of list\n");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("Enter the list no %d of the element\n", i);
        scanf("%d", &ptr[i]);
    }
    for (i = 0; i < n; i++)
    {
        printf("The list no %d of the element %d\n", i, ptr[i]);
    }
        // ************** Use of calloc **************

        ptr = (int *)calloc(n, sizeof(int));
        printf("Enter the size of list\n");
        scanf("%d", &n);
        for (int i = 0; i < n; i++)
        {
            printf("Enter the list no %d of the element\n", i);
            scanf("%d", &ptr[i]);
        }
        for (i = 0; i < n; i++)
        {
            printf("The list no %d of the element %d\n", i, ptr[i]);
        }

        // ********** Use of realloc **********

        ptr = (int *)realloc(ptr, n * sizeof(int));
        printf("Enter the new size of list\n");
        scanf("%d", &n);
        for (int i = 0; i < n; i++)
        {
            printf("Enter the new list no %d of the element\n", i);
            scanf("%d", &ptr[i]);
        }
        for (i = 0; i < n; i++)
        {
            printf("The new list no %d of the element %d\n", i, ptr[i]);
        }

        // ********** Use of free ***********
        free(ptr);
        printf("Hello");
        return 0;
}


// #include<stdio.h>
// #include<stdlib.h>
// int main()
// {
//     int* ptr;
//     int i,n;
//     ptr = (int*) malloc(n*sizeof(int));
//     printf("Enter the size of list\n");
//     scanf("%d",&n);
//     for (int i = 0; i < n; i++)
//     {
//         printf("Enter the list no %d of the list\n",i);
//         scanf("%d",&ptr[i]);
//     }
//     free(ptr);
//     for ( i = 0; i < n; i++)
//     {
//         printf("The list no %d of the list %d\n",i,ptr[i]);
//     }
//     printf("Hello");
//     return 0;
// }