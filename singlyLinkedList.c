#include<stdio.h>
#include<stdlib.h>
struct node
{
    int info;
    struct node *next; 
};typedef struct node NodeType;
NodeType *head=NULL;
void insertAtFirst(int item)
{
    NodeType *newnode;
    newnode=(NodeType*)malloc(sizeof(NodeType));
    newnode->info=item;
    newnode->next=head;
    head=newnode;
}
void deleteAtFirst()
{
    NodeType *temp;
    if(head==NULL)
    {
    printf("Empty linked list\n"); 
    }
    else 
    {
          temp=head;
          head=head->next;
          free(temp); 
    }
}
void display()
{
    NodeType *temp; 
    temp=head;
    while(temp!=NULL)
    {
        printf("%d\t",temp->info); 
        temp=temp->next;
    }
}
int main()
{
    int choice,x;
    do 
    {
       printf("\nPerform the linked list Operation:\n");
       printf("1)Insert at first\n2)Delete at first\n3)Display\n4)exit\n");
       printf("Enter your choice\n"); 
       scanf("%d",&choice);
       switch(choice)
        {
           case 1:
             printf("Enter the item to be inserted:"); 
             scanf("%d", &x);
             insertAtFirst(x);
             break;
           case 2:
           deleteAtFirst();
           break;
           case 3:
           display();
           break;
           case 4:
           exit(1);
           break;
            default:
           printf("invalid choice\n");
        }
        
    }while(choice!=4);
}