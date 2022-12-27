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
    struct node *front2,*rear2;
    front2=NULL;
    rear2=NULL;
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
        if(front2==NULL)
        {
          temp=(struct node*)malloc(sizeof(struct node));
          temp->data=value;
          temp->link=NULL;
          front2=temp;
          rear2=temp;
       }
       else
       {
           if(rear2->link==NULL)
            {
              temp=(struct node*)malloc(sizeof(struct node));
               temp->data=value;
               rear2->link=temp;
               rear2=temp;
               rear2->link=front2;
            }
            else
            {
              temp=(struct node*)malloc(sizeof(struct node));
               temp->data=value;
               temp->link=rear2->link;
               rear2->link=temp;
               rear2=temp;
               rear2->link=front2;
            }
       }
       printf("want to insert more then press 2");
       scanf("%d",&y);
        }
            while(y==3)
        {
            printf("enter the value to be inserted");
        scanf("%d",&value);
        if(front2==NULL)
        {
          temp=(struct node*)malloc(sizeof(struct node));
          temp->data=value;
          temp->link=NULL;
          front2=temp;
          rear2=temp;
       }
       else
       {
           if(front2->link==NULL)
            {
              temp=(struct node*)malloc(sizeof(struct node));
               temp->data=value;
               temp->link=front2;
               front2=temp;
               rear2->link=front2;
            }
            else
            {
              temp=(struct node*)malloc(sizeof(struct node));
               temp->data=value;
               temp->link=front2;
               front2=temp;
               rear2->link=front2;
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
       temp=front2;
        count=0;
        p=NULL;
       while(temp!=p)
       {
           printf("%d->",temp->data);
           p=front2;
           temp=temp->link;
           count++;
       }
       printf("\n");
       printf("\n the number of nodes are %d",count);
       printf("\n");

       struct node *s1,*s2;
       s1=front;
       s2=front2;
       temp=s1;
       while(temp->link!=s1)
        {
          temp=temp->link;
        }
       temp->link=s2;
       temp=temp->link;
       while(temp->link!=s2)
          temp=temp->link;
       temp->link=s1;
       temp=s1;
        count=0;
        p=NULL;
       while(temp!=p)
       {
           printf("%d->",temp->data);
           p=s1;
           temp=temp->link;
           count++;
       }
       printf("\n");
       printf("\n the number of nodes are %d",count);


       return 0;

}