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
    struct node *start,*temp, *r;
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
           temp=start;
           while(temp->link!=NULL){
                temp=temp->link;}
           r=(struct node*)malloc(sizeof(struct node));
           r->data=value;
           temp->link=r;
           r->link=NULL;
       }
       printf("want to insert more then press 1");
       scanf("%d",&x);
    }
       printf("\n");
       temp=start;
      int count=0;
       while(temp!=NULL)
       {
           printf("%d ->",temp->data);
           temp=temp->link;
           count++;
       }
       printf("\n the number of nodes are %d",count);
       return 0;
}