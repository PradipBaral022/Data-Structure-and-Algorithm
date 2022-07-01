#include<stdio.h>
#include<stdlib.h>
struct node
{
int info; 
struct node *next;
};
typedef struct node NodeType;
NodeType *head; 
struct node *head = NULL;
void insertAtfirst(int); 
void insertAtgivenposition(int); 
void insertAtend(int); 
void deletAtfirst(); 
void deletAtlast(); 
void delet_nthnode(); 
void info_sum();
int main()
{
  int choice; int item;
  do 
 {
    printf("\nOperation on Linked List:\n");
    printf("1)Insert at first \n2)Insert at given position \n3)Insert at last \n4)Delete first node\n5)Delete last node\n6)Delete nth node\n7)Display items\n8)exit\n");
    printf("Enter your choice\n"); 
    scanf("%d",&choice); 
    switch(choice)
    {
    case 1:
    printf("Enter item to be inserted:");
    scanf("%d", &item);
    insertAtfirst(item);
    break;
    case 2:
    printf("Enter item to be inserted:");
    scanf("%d", &item);
    insertAtgivenposition(item); 
    break;
    case 3:
    printf("Enter item to be inserted:");
    scanf("%d", &item);
    insertAtend(item); 
    break;
    case 4:
    deletAtfirst(); 
    break;
    case 5:
    deletAtlast(); 
    break;
    case 6:
    delet_nthnode(); 
    break;
    case 7:
    printf("The items in the list are:\n");
    info_sum();
    break; 
    case 8:
    break;
    default:
    printf("invalid choice\n");
    break;
    }
  }while(choice!=8);
}
void insertAtfirst(int item)
{
    NodeType *nnode;
    nnode=(NodeType*)malloc(sizeof(NodeType)); 
    nnode->info=item; 
    nnode->next=head; 
    head=nnode;
}
void insertAtgivenposition(int item)
{
    NodeType *nnode; 
    NodeType *temp; 
    temp=head;
    int p,i;
    nnode=(NodeType*)malloc(sizeof(NodeType)); 
    nnode->info=item; 
    if (head==NULL)
    { 
    nnode->next=NULL;
    head=nnode;
    }
    else
    {
    printf("Enter Position of a node at which you want to insert an new node\n");
    scanf("%d",&p);
    for(i=1;i<p-1;i++)
    {
        temp=temp->next;
    }
    nnode->next=temp->next; 
    temp->next=nnode;
    }
}
void insertAtend(int item)
 {
    NodeType *nnode; 
    NodeType *temp; 
    temp=head;
    nnode=( NodeType *)malloc(sizeof(NodeType)); 
    nnode->info=item;
    if(head==NULL) 
    { 
    nnode->next=NULL; 
    head=nnode; 
    }
    else {
    while(temp->next!=NULL)
    {
    temp=temp->next;
    }
    nnode->next=NULL; 
    temp->next=nnode;
    }
}
void deletAtfirst()
{
    NodeType *temp; 
    if(head==NULL)
    {
    printf("Void deletion\n"); 
    return;
    }
    else { 
    temp=head; 
    head=head->next; 
    free(temp);
    }
}
void deletAtlast()
{
    NodeType *hold,*temp; 
    if(head==NULL)
    {
    printf("Void deletion\n"); 
    return;
    } 
    else if(head->next==NULL) 
    {
    hold=head; head=NULL;
    free(hold);
    }
    else 
    { 
    temp=head;
    while(temp->next->next!=NULL)
    {
        temp=temp->next;
    }
    hold=temp->next; 
    temp->next=NULL;
    free(hold);
    }
}
void delet_nthnode()
{
    NodeType *hold,*temp;
    int pos, i;
    if(head==NULL)
    {
        printf("Void deletion\n");
        return;
    }
    else 
    { 
    temp=head;
    printf("Enter position of node which node is to be deleted\n");
    scanf("%d",&pos); 
    for(i=1;i<pos-1;i++)
    {
        temp=temp->next;
    }
    hold=temp->next; 
    temp->next=hold->next;
    free(hold);
    }
}
void info_sum()
{
    NodeType *temp; 
    temp=head;
    while(temp!=NULL)
    {
        printf("%d\t",temp->info); 
        temp=temp->next;
    }
}
void count_nodes()
{ 
    int cnt=0;
    NodeType *temp;
    temp=head; 
    while(temp!=NULL)
    {
        cnt++;
        temp=temp->next;
    }
 printf("total nodes=%d",cnt);
}