#include<stdio.h>
int max,pos,item;
void traverse(int x[])
{ 
    printf("The array is:\n");
    for(int i=0;i<max;i++)
    {
        printf("a[%d]=%d \n",i,x[i]);
    }
}
void insert(int y[])
{
    printf("Enter the position of the number to be inserted:");
    scanf("%d",&pos);
    printf("Enter the number to be inserted:");
    scanf("%d",&item);
    max++;
    for(int i=max-1;i>pos-1;i--)
    {
        y[i]=y[i-1];
    }
    y[pos-1]=item;
    
}
void delete(int z[])
{
    printf("Enter the position to be deleted:");
    scanf("%d",&pos);
    max--;
    for(int i=pos-1;i<max;i++)
    {
        z[i]=z[i+1];
    }
}
void update(int d[])
{
    printf("Enter the pos to be updated:");
    scanf("%d",&pos);
    printf("Enter the item to be updated:");
    scanf("%d",&item);
    d[pos-1]=item;
}
int main()
{
    int a[100],choose,ch;
    printf("Enter the number of max elements in the array:");
    scanf("%d",&max);
    printf("Enter the elements of the array;");
    for(int i=0;i<max;i++)
    {
        scanf("%d",&a[i]);
    }
    do
    {
       printf("Choose the operation to be done:\n");
       printf("1)Insert\n2)Delete\n3)Update\n4)Traverse\n:");
       scanf("%d",&choose);
       switch(choose)
       {
        case 1: 
        insert(a);
        break;
        case 2: 
        delete(a);
        break;
        case 3: 
        update(a);
        break;
        case 4: 
        traverse(a);
        break;
        default: 
        printf("Choose the valid option");
        break;
       }
       printf("Do you want to run the program again? If yes enter 1 else enter any key:");
       scanf("%d",&ch);
    }while(ch==1);

}