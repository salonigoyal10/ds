#include<stdio.h>
#include<stdlib.h>
struct node
{
    struct node *prev;
    int data;
    struct node *next;
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
          temp->next=NULL;
          temp->prev=NULL;
          front=temp;
          rear=temp;
       }
       else
       {
           if(rear->next==NULL)
            {
              temp=(struct node*)malloc(sizeof(struct node));
               temp->data=value;
               temp->prev=rear;
               rear->next=temp;
               front->prev=temp;
               temp->next=front;
               rear=temp;
            }
            else
            {
            temp=(struct node*)malloc(sizeof(struct node));
            temp->data=value;
            temp->prev=rear;
            rear->next=temp;
            temp->next=rear->next;
            rear=temp;
            front->prev=rear;
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
          temp->next=NULL;
          temp->prev=NULL;
          front=temp;
          rear=temp;
       }
       else
       {
           if(front->prev==NULL)
            {
              temp=(struct node*)malloc(sizeof(struct node));
               temp->data=value;
               temp->next=front;
               temp->prev=rear;
               front=temp;
               rear->prev=front;
               rear->next=front;
            }
            else
            {
              temp=(struct node*)malloc(sizeof(struct node));
               temp->data=value;
               temp->next=front;
               front->prev=temp;
               front=temp;
               front->prev=rear;
               rear->next=front;
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
           temp=temp->next;
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
           if(rear==front)
            {
              temp=front;
               front=rear=NULL;
               free(temp);
            }
            else
            {
               temp=rear;
               rear=rear->prev;
               front->prev=rear;
               rear->next=front;
               free(temp);
            }
       }
       printf("want to delete more then press 2");
       scanf("%d",&y);
        }
            while(y==3)
        {
        if (front==NULL)
        {
            printf("empty");
        }
        else
        {

            if(front==rear)
            {
                 temp=front;
                 front=NULL;
                 rear=NULL;
                 free(temp);
            }
            else
            {
                temp=front;
                front=front->next;
                front->prev=rear;
                rear->next=front;
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
           temp=temp->next;
           count++;
       }
       printf("\n");
       printf("\n the number of nodes are %d",count);
       return 0;
}