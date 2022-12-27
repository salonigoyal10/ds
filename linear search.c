#include<stdio.h>
int main()
{
    int i,arr[5],n,m;
    printf("enter the no. of element of array");
    scanf("%d",&m);
    printf("enter the element to be searched");
    scanf("%d",&n);

    for(i=0;i<m;i++)
    {
        printf("enter the arr[%d] element\n",i);
        scanf("%d",&arr[i]);
    }
    for(i=0;i<m;i++)
    {
        if(arr[i]==n)
        {
            printf("yes it is in array at %d position",i);
           break;
        }
        if(i==m)
           printf("no such element exist\n");
    }
   
}
