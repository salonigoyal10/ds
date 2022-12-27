#include<stdio.h>
int main()
{
    int lower,upper,mid,i,n,a[5],m,pos;
    printf("enter the no. of elements in array");
    scanf("%d",&m);
    printf("enter the no. to be searched");
    scanf("%d",&n);
    lower=0;
    upper=m-1;
    for(i=0;i<m;i++)
    {
        printf("enter the arr[%d] element\n",i);
        scanf("%d",&a[i]);
    }
    i=0;
    while(lower<=upper)
    {
        mid=(lower+upper)/2;
        if(a[mid]==n)
        {
            pos=mid;
            printf("number found at position %d",pos);
            break;
        }
        else
        {
            if(a[mid]>n)
                upper=mid-1;
            else
                lower=mid+1;
        }

    }
}