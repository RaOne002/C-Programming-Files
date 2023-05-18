#include<stdio.h>
#define ROW 3
#define COL 3
int main()
{
    int i,j,mat1[ROW][COL],mat2[COL][ROW];
    printf("Enter the matrix mat1(%d X %d):\n",ROW,COL);
    for(i=0;i<ROW;i++)
    {
        for(j=0;j<COL;j++)
            scanf("%d",&mat1[i][j]);
    }
    for(i=0;i<COL;i++)
        for ( j = 0; j < ROW; j++)
        {
            mat2[i][j] = mat1[j][i];
        }
    printf("The transpose of the matrix is:\n");
    for(i=0;i<COL;i++)
    {    for(j=0;j<ROW;j++)
        printf("%5d",mat2[i] [j]);
        printf("\n") ;
    }
    printf("\n") ;
    return 0;
}