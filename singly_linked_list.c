#include<stdio.h>
#include<stdlib.h>

struct node
{   
    int info;
    struct node *next;
};
struct node *head=NULL;;

void create();
void display();

int main()
{
    create();
    create();
    create();
    create();
    create();
    display();
}

void create()
{
    int data;
    struct node *ptr,*temp;
    temp=(struct node *)malloc(sizeof(struct node));
    printf("enter the element:");
    scanf("%d",&data);
    temp->info=data;
    temp->next=NULL;
    if(head==NULL)
    {
        head=temp;
    }
    else
    {
        ptr=head;
        while(ptr->next!=NULL)
        {
            ptr=ptr->next;
        }
        ptr->next=temp;
    }
}

void display()
{
    struct node *ptr;
    printf("Linked List Is Below:\n");
    ptr=head;
    while(ptr!=NULL)
    {
        printf("%d ",ptr->info);
        ptr=ptr->next;
    }
    
}
