#define ROW 3
#define COL 4
#include<stdio.h>
void main ()
{
    int mat [ROW] [COL], i, j;
    printf ("Enter the elements of matrix (%dx%d) rOW-Wlse ; \n" ,ROW,COL) ;
    for(i=0;i<ROW;i++)
        for(j=0;j<COL;j++)
        scanf ("%d", &mat[i] [j]);
    printf ("The matrix that you have entered is ; \n") ;
    for(i=0;i<ROW;i++)
    {    for(j=0;j<COL;j++)
        printf("%5d",mat[i] [j]);
        printf("\n") ;
    }
    printf("\n") ;
}