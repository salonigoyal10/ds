#include<stdio.h>
#include<stdlib.h>
void enque(int [],int,int *,int *,int);
int deque(int [],int,int *,int *);
int display(int [],int,int,int);
int main()
{
    int n,x;
    printf("enter the capacity of circular queue");
    scanf("%d",&n);
    int q[n],front=-1,rear=-1;

    printf("enter the value to be enqueued");
    scanf("%d",&x);
    enque(q,n,&front,&rear,x);

    printf("enter the value to be enqueued");
    scanf("%d",&x);
    enque(q,n,&front,&rear,x);

    printf("enter the value to be enqueued");
    scanf("%d",&x);
    enque(q,n,&front,&rear,x);

    printf("enter the value to be enqueued");
    scanf("%d",&x);
    enque(q,n,&front,&rear,x);

    display(q,front,rear,n);

    x=deque(q,n,&front,&rear);
    printf("\n value deleted is %d",x);

    x=deque(q,n,&front,&rear);
    printf("\n value deleted is %d",x);

    x=deque(q,n,&front,&rear);
    printf("\n value deleted is %d\n",x);

    display(q,front,rear,n);

    printf("\n enter the value to be enqueued");
    scanf("%d",&x);
    enque(q,n,&front,&rear,x);

    printf("enter the value to be enqueued");
    scanf("%d",&x);
    enque(q,n,&front,&rear,x);

    printf("enter the value to be enqueued");
    scanf("\n%d",&x);
    enque(q,n,&front,&rear,x);

    display(q,front,rear,n);

    return 0;

}
 void enque(int q[],int n,int *f,int*r,int x)
 {
     if((*r)==n)
     {
         printf("queue overflowed");
         exit(1);
     }
     else
     {
         if((*f)==-1)
         {
             (*f)++;
             (*r)++;
             q[*r]=x;
         }
         else
         {
             (*r)++;
             q[*r]=x;
         }
     }
 }
 int deque(int q[],int n,int *f,int *r)
 {
     int y;
     if((*f)==-1)
     {
         printf("queue underflow");
         exit(1);
     }
     else
     {
         if((*f)==(*r))
         {
             y=q[*f];
             (*f)=-1;
             (*r)=-1;
             return y;
         }
         else
         {
             y=q[*f];
             (*f)++;
             return y;

         }
     }
 }
 int display(int q[],int f,int r,int n)
 {
     if(f==-1)
     {
         printf("\n queue is empty");
     }
     else
     {
         while(f!=r)
         {
             printf("%d-->",q[f]);
             f++;
         }
     }
     if(f==r)
        printf("%d\n",q[f]);
 }