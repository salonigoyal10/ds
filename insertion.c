#include<stdio.h>
int main()
{
    int i,arr[10];
    for(i=0;i<10;i++)
    {
        printf("enter the arr[%d] element\n",i);
        scanf("%d",&arr[i]);
    }
    for(i=0;i<10;i++)
    {
        printf("arr[%d]=%d\n",i,arr[i]);
    }

}