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
    struct node *f,*temp, *r,*p;
    f=r=NULL;
    x=1;
    printf("push in linked list\n");
    while(x)
    {
        printf("enter the value to be pushed");
        scanf("%d",&value);
        if(f==NULL)
        {
          temp=(struct node*)malloc(sizeof(struct node));
          temp->data=value;
          temp->link=NULL;
          f=r=temp;

       }
       else
       {
           temp=f;
           while(temp->link!=NULL)
            temp=temp->link;
         p=(struct node*)malloc(sizeof(struct node));
         p->data=value;
         temp->link=p;
         p->link=NULL;
         r=p;
       }
       printf("want to insert more then press 1");
       scanf("%d",&x);
    }
       printf("\n");
       temp=f;
      int count=0;
       while(temp!=NULL)
       {
           printf("%d ->",temp->data);
           temp=temp->link;
           count++;
       }
       printf("\n the number of nodes are %d",count);
       x=1;
       printf("\n pop in linked list\n");

   while(x)
    {
        if(f==NULL)
        {
          printf("queue underflow");
          exit(1);
       }
       else
       {
           if(f==r)
           {
               temp=f;
               f=NULL;
               r=NULL;
               free(temp);
           }
           else
           {
               temp=f;
               f=f->link;
               free(temp);
           }

       }
       printf("want to pop more then press 1");
       scanf("%d",&x);
    }
       printf("\n");
       temp=f;
       count=0;
       while(temp!=NULL)
       {
           printf("%d ->",temp->data);
           temp=temp->link;
           count++;
       }
       printf("\n the number of nodes are %d",count);
       return 0;
}
