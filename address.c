#include<stdio.h>
#define n 3
int main()
{

   int a[n][n]={0},i,j;
    for(i=0;i<=n;i++)
    {
        for(j=0;j<=n;j++)
            printf("the add of a[%d][%d]=%d\n",i,j,&a[i][j]);
        printf("\n");
    }
}