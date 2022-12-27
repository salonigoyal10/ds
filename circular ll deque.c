#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *link;
};
int main()
{
    int x,y,value;
    struct node *front,*rear,*temp, *r,*p=NULL;
    front=NULL;
    rear=NULL;
    x=1;
    printf("insertion in circular linked list\n");
    while(x)
    {

        printf("want to enqueue at rear end press 2\n");
        printf("want to enqueue at front end press 3\n");
        scanf("%d",&y);
        while(y==2)
        {
            printf("enter the value to be inserted");
        scanf("%d",&value);
        if(front==NULL)
        {
          temp=(struct node*)malloc(sizeof(struct node));
          temp->data=value;
          temp->link=NULL;
          front=temp;
          rear=temp;
       }
       else
       {
           if(rear->link==NULL)
            {
              temp=(struct node*)malloc(sizeof(struct node));
               temp->data=value;
               rear->link=temp;
               rear=temp;
               rear->link=front;
            }
            else
            {
              temp=(struct node*)malloc(sizeof(struct node));
               temp->data=value;
               temp->link=rear->link;
               rear->link=temp;
               rear=temp;
               rear->link=front;
            }
       }
       printf("want to insert more then press 2");
       scanf("%d",&y);
        }
            while(y==3)
        {
            printf("enter the value to be inserted");
        scanf("%d",&value);
        if(front==NULL)
        {
          temp=(struct node*)malloc(sizeof(struct node));
          temp->data=value;
          temp->link=NULL;
          front=temp;
          rear=temp;
       }
       else
       {
           if(front->link==NULL)
            {
              temp=(struct node*)malloc(sizeof(struct node));
               temp->data=value;
               temp->link=front;
               front=temp;
               rear->link=front;
            }
            else
            {
              temp=(struct node*)malloc(sizeof(struct node));
               temp->data=value;
               temp->link=front;
               front=temp;
               rear->link=front;
            }
        }
        printf("want to insert more then press 3");
       scanf("%d",&y);
        }
        printf("\n");
       printf("want to insert more then press 1");
       scanf("%d",&x);
    }
       printf("\n");
       temp=front;
        int count=0;
       while(temp!=p)
       {
           printf("%d->",temp->data);
           p=front;
           temp=temp->link;
           count++;
       }
       printf("\n");
       printf("\n the number of nodes are %d",count);
       printf("deletion in circular linked list\n");
       x=1;
    while(x)
    {

        printf("want to dequeue at rear end press 2\n");
        printf("want to dequeue at front end press 3\n");
        scanf("%d",&y);
        while(y==2)
        {

        if(front==NULL)
        {
          printf("underflowed");
          break;
       }
       else
       {
           if(front->link==NULL)
            {
              temp=front;
               front=rear=NULL;
               front=front->link;
               free(temp);
            }
            else
            {
               temp=rear;
               r=front;
               while(r->link!=front)
                   r=r->link;
                r->link=temp->link;
                rear=r;
                free(temp);
            }
       }
       printf("want to delete more then press 2");
       scanf("%d",&y);
        }
            while(y==3)
        {
        if(front==NULL)
        {
          printf("underflowed");
          break;
       }
       else
       {
           if(front->link==NULL)
            {
              temp=front;
               front=rear=NULL;
               front=front->link;
               free(temp);
            }
            else
            {
              temp=front;
               rear->link=temp->link;
               front=front->link;
               free(temp);
            }
        }
        printf("want to delete more then press 3");
       scanf("%d",&y);
        }
        printf("\n");
       printf("want to delete more then press 1");
       scanf("%d",&x);
    }
       printf("\n");
       temp=front;
       p=NULL;
      count=0;
       while(temp!=p)
       {
           printf("%d->",temp->data);
           p=front;
           temp=temp->link;
           count++;
       }
       printf("\n");
       printf("\n the number of nodes are %d",count);
       return 0;
}
