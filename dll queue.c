#include <stdio.h>
#include<stdlib.h>
struct node
{
    struct node *prev;
    int data;
    struct node *next;
};

int main() {
    struct node *start,*r,*temp,*front,*rear;
    int x=1,value;
    front=NULL;
    rear=NULL;
    printf("insertion\n");
    while(x==1)
    {
        printf("enter the value");
        scanf("%d",&value);
        if (front==NULL)
        {
            r=(struct node*)malloc(sizeof(struct node));
            r->data=value;
            r->prev=NULL;
            r->next=NULL;
            front=rear=r;
        }
        else
        {
            temp=front;
            while(temp->next!=NULL)
                temp=temp->next;
            r=(struct node*)malloc(sizeof(struct node));
            r->data=value;
            r->prev=temp;
            temp->next=r;
            r->next=NULL;
            rear=r;
        }
        printf("enter more values press 1");
        scanf("%d",&x);
    }
    printf("\n");
    temp=front;
    int count=0;
    while(temp!=NULL)
    {
        printf("%d<-->",temp->data);
        temp=temp->next;
        count++;
    }
    printf("\n");
    printf("no of nodes=%d",count);
    printf("\n");
    printf("deletion\n");
    x=1;
    while(x==1)
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
                free(temp);
            }
        }
        printf("delete more values press 1");
        scanf("%d",&x);
    }
    printf("\n");
    temp=front;
    count=0;
    while(temp!=NULL)
    {
        printf("%d<-->",temp->data);
        temp=temp->next;
        count++;
    }
    printf("\n");
    printf("no of nodes=%d",count);

    return 0;
}

