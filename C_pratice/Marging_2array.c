#include<stdio.h>
int main()
{
    int a[20],b[20],c[30],i,j,k,n,m,d,e,f;
    printf("Enter the length of the 1st array\n");
    scanf("%d",&m);
    printf("Enter the element of the aray(in sorted order):\n");
    for ( i = 0; i < m; i++)
    scanf("%d",&a[i]);
    printf("Enter the length of the 2nd array\n");
    scanf("%d",&n);
    printf("Enter the element of the aray(in sorted order):\n");
    for ( j = 0; j < n; j++)
    scanf("%d",&b[j]);

    i=0,j=0,k=0;
    while ((i<m) && (j<n))
    {
        if(a[i]>b[j])
        c[k++] = b[j++];
        else
        c[k++] = a[i++];
    }
    while(i<m)
        c[k++] = a[i++];
    while(j<n)
        c[k++] = b[j++];
    printf ("Merged array arr3 is\n");
    for(i=0;i<m+n;i++)
    printf("%d ",c[i]);
    printf("\n" );
    return 0;
}
