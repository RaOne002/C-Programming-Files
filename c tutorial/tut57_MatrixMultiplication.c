#include <stdio.h>
int main()
{
    int i, j, k, m, n, p, q, mat1[10][10], mat2[10][10], mat3[10][10];
    printf("Enter the number of ROW and COL of the matrix\n");
    scanf("%d %d", &m, &n);
    printf("Enter matrix mat1(%d X %d) row-wise: \n", m, n);
    for (i = 0; i < m; i++)
        for (j = 0; j < n; j++)
            scanf("%d", &mat1[i][j]);

    printf("Enter the number of ROW and COL of the matrix\n");
    scanf("%d %d", &p, &q);
    printf("Enter matrix mat2(%d X %d) row-wise: \n", p, q);
    for (i = 0; i < p; i++)
        for (j = 0; j < q; j++)
            scanf("%d", &mat2[i][j]);

    /* MULTIFICATION */
    if (n == p)
    {
        for (i = 0; i < m; i++)
        {
            for (j = 0; j < 10; j++)
            {
                mat3[i][j] = 0;
                for (k = 0; k < n; k++)
                    mat3[i][j] += mat1[i][k] * mat2[k][j];
            }
        }

        printf("The multification result of the matrix mat3 is: \n");
        for (i = 0; i < m; i++)
        {
            for (j = 0; j < q; j++)
                printf("%5d\t", mat3[i][j]);
            printf("\n");
        }
    }
    else
        printf("The multification of the given arry can not be done");

    return 0;
}