#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *link;
};
int main()
{
    int x,value;
    struct node *start,*temp, *r,*p;
    start=NULL;
    x=1;
    printf("insertion in linked list\n");
    while(x)
    {
        printf("enter the value to be inserted");
        scanf("%d",&value);
        if(start==NULL)
        {
          temp=(struct node*)malloc(sizeof(struct node));
          temp->data=value;
          temp->link=NULL;
          start=temp;
       }
       else
       {
           if(start->link==NULL)
           {
              temp=(struct node*)malloc(sizeof(struct node));
               temp->data=value;
               start->link=temp;
               temp->link=start;
           }
           else
           {

               while(temp->link!=start)
                temp=temp->link;
                r=(struct node*)malloc(sizeof(struct node));
                r->data=value;
               temp->link=r;
               r->link=start;
           }
       }
       printf("want to insert more then press 1");
       scanf("%d",&x);
    }
    temp=start;
       printf("\n");
       p=NULL;
        int count=0;
       while(temp!=p)
       {
           printf("%d->",temp->data);
           temp=temp->link;
           p=start;
           count++;
       }
       printf("\n");
       printf("\n the number of nodes are %d",count);
       return 0;
}
