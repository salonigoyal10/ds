#include<stdio.h>
void main()
{
    int n,i,s,a[10];
    printf("enter the size ");
    scanf("%d",&s);
    printf("enter the nos ");
    for(i=0;i<s;i++)
        scanf("%d",&a[i]);
    printf("enter the no to be added ");
    scanf("%d",&n);
            i=s-1;
             while(n<a[i]&&i>=0)
             {
                 a[i+1]=a[i];
                 i--;
             }
             a[i+1]=n;

            printf("\n The array after insertion of is: ");
       for(i=0;i<=s;i++)
       {
          printf("\t%d", a[i]);
       }
}