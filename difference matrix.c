#include<stdio.h>
void main()
{

    int a[10][10],b[10][10],c[10][10],i,r,com,j;
    printf("enter the number of rows and column of matrix\n");
    scanf("%d %d",&r,&com);

    printf("enter the elements of of first matrix\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<com;j++)
        scanf("%d",&a[i][j]);
    }
    printf("entered matrix is\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<com;j++)
        printf("%d\t",a[i][j]);
        printf("\n");
    }
    printf("enter the elements of of second matrix\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<com;j++)
        scanf("%d",&b[i][j]);
    }
    printf("entered matrix is\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<com;j++)
        printf("%d\t",b[i][j]);
        printf("\n");
    }

    for(i=0;i<r;i++)
    {
        for(j=0;j<com;j++)
            c[i][j]=a[i][j]-b[i][j];
    }
    printf("the difference is\n");
   for(i=0;i<r;i++)
    {
        for(j=0;j<com;j++)
        printf("%d\t",c[i][j]);
        printf("\n");
    }
}