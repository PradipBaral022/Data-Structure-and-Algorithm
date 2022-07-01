#include<stdio.h>
#define maxSize 5
struct stack
{
    int top;
    int item[maxSize];
};typedef struct stack st;
void createEmptystack(st s[])
{
    s->top=-1;
}
void push(st s[],int x)
{
    if(s->top == maxSize-1)
    {
        printf("Stack Overflow\n");
    }
    else
    {
        s->item[++s->top]=x;
    }
}
void pop(st s[])
{
    int y=0;
    if(s->top==-1)
    {
        printf("Stack Underflow\n");
    }
    else{
        y=s->item[s->top];
        s->top--;
    }
}
void traverse(st s[])
{
    printf("The element of the stack is:\n");
    for(int i=0;i<=(s->top);i++)
    {
        printf("%d\n",s->item[i]);
    }
}
int main()
{
    int pushItem,choose,ch;
    st s[maxSize];
    createEmptystack(s);
    printf("Enter the elements of the stack:\n");
    for(int i=0;i<maxSize;i++)
    {
        scanf("%d",&s->item[i]);
        s->top++;
    }
    do
    {
       printf("Choose the operation to be done on stack:\n1)Push\n2)Pop\n3)Traverse:\n");
       scanf("%d",&choose);
       switch(choose)
       {
        case 1:
        printf("Enter the item to be pushed:");
        scanf("%d",&pushItem);
        push(s,pushItem);
        break;
        case 2:
        pop(s);
        break;
        case 3:
        traverse(s);
        break;
        default:
        printf("Choose the valid option\n");
        break;
       }
       printf("Press 1 if you want to continue:");
       scanf("%d",&ch);
    }while(ch==1);
}