#include <stdio.h>
#include<stdlib.h>
struct node
{
    struct node *prev;
    int data;
    struct node *next;
};

int main() {
    struct node *start,*r,*temp;
    int x=1,value;
    start=NULL;
    printf("insertion\n");
    while(x==1)
    {
        printf("enter the value");
        scanf("%d",&value);
        if (start==NULL)
        {
            r=(struct node*)malloc(sizeof(struct node));
            r->data=value;
            r->prev=NULL;
            r->next=NULL;
            start=r;
        }
        else
        {
            r=(struct node*)malloc(sizeof(struct node));
            r->data=value;
            r->prev=NULL;
            r->next=start;
            start->prev=r;
            start=r;
        }
        printf("enter more values press 1");
        scanf("%d",&x);
    }
    printf("\n");
    temp=start;
    int count=0;
    while(temp!=NULL)
    {
        printf("%d<-->",temp->data);
        temp=temp->next;
        count++;
    }
    printf("\n");
    printf("no of nodes=%d",count);