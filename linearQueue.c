#include<stdio.h>
#define max 5
struct Queue
{
    int front;
    int rear;
    int item[max];
};typedef struct Queue qt;
void createEmpty(qt q[])
{
    q->front=0;
    q->rear=-1;
}
void insert(qt q[],int x)
{
    if(q->rear>max)   
    {
        printf("Stack Overflow\n");
    }
    else{
        q->item[++q->rear]=x;
    }
}
void delete(qt q[])
{
    if(q->front>q->rear)
    {
        printf("Stack underflow\n");
    }
    else 
    {
        int y=0;
        y=q->item[q->front++];
    }
}
void traverse(qt q[])
{
    printf("The elements in the queue is:\n");
    for(int i=q->front;i<=q->rear;i++)
    {
        printf("%d\n",q->item[i]);
    }
}
int main()
{
    int choose,pushItem,ch;
    qt q[max];
    createEmpty(q);
    do
    {
         printf("Choose the operation to be performed:\n1)Enqueue\n2)Dequeue\n3)Traverse\n:");
         scanf("%d",&choose);
         switch(choose)
         {
             case 1:
             printf("Enter the number to be inserted:");
             scanf("%d",&pushItem);
             insert(q,pushItem);
             break;
             case 2:
             delete(q);
             break;
             case 3:
             traverse(q);
             break;
             default:
             printf("Enter the valid option\n");
         }
         printf("Enter 0 if you want to continue:");
         scanf("%d",&ch);
    } while (ch == 0);
}
    