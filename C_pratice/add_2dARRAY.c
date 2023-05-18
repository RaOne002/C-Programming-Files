#include<stdio.h>
#define ROW 2
#define COL 3
int main()
{
    int i,j,mat1[ROW][COL],mat2[ROW][COL],mat3[ROW][COL];
    printf("Enter matrix mat1(%d X %d) row-wise: \n",ROW,COL);
    for(i=0;i<ROW;i++)
        for(j=0;j<COL;j++)
        scanf("%d",&mat1[i][j]);

    printf("Enter matrix mat2(%d X %d) row-wise: \n",ROW,COL);
    for(i=0;i<ROW;i++)
        for(j=0;j<COL;j++)
        scanf("%d",&mat2[i][j]);

     /* ADDITION */
     for ( i = 0; i < ROW; i++)
     {
        for ( j = 0; j < COL; j++)
        {
            mat3[i][j] = mat1[i][j] + mat2[i][j];
        }  
     }
     printf("The addition of 2 matrix mat3 is:\n");
     for(i=0;i<ROW;i++)
     {
         for(j=0;j<COL;j++)
            printf("%5d",mat3[i][j]);
        printf("\n");
     }
    return 0;
}