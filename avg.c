#include<stdio.h>
int main()
{
    int i,marks[10],n,sum=0,avg;
    printf("enter the no. of students");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("enter the marks[%d] element\n",i);
        scanf("%d",&marks[i]);
    }
    for(i=1;i<=n;i++)
        sum=sum+marks[i];
     avg=sum/n;
     printf("the average of marks is= %d ",avg);
    
}