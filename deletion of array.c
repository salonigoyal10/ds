#include<stdio.h>
int main()
{
    int i,arr[10],n,pos;
    printf("enter the no. of elements in array");
    scanf("%d",&n);
    for(i=0;i<n-1;i++)
    {
        printf("enter the arr[%d] element\n",i);
        scanf("%d",&arr[i]);
    }
    printf("enter the position of element to be deleted");
    scanf("%d", &pos);
    if(pos>=n+1)
        printf("deletion not possible\n");
    else
       for(i=pos-1;i<n-1;i++)
            arr[i]=arr[i+1];
       printf("the resultant array is\n");
    for(i=0;i<n-1;i++)
    {
        printf("arr[%d]=%d\n",i,arr[i]);
    }