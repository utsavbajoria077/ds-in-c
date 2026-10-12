#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *create()
{
    struct node *head=NULL,*temp,*newnode;
    int n,i;
    printf("Enter number of nodes:");
    scanf("%d",&n);
    
    for(i=0;i<n;i++)
    {
        newnode=(struct node *)malloc(sizeof(struct node));
        printf("Enter data:");
        scanf("%d",&newnode->data);
        newnode->next=NULL;
        
        if(head==NULL)
        {
           head=newnode; 
        }
        else
        {
            temp->next=newnode;
        }
        temp=newnode;
    }
    return head;
}

void display(struct node *head)
{
    while(head!=NULL)
    {
        printf("%d->",head->data);
        head=head->next;
    }
    printf("NULL");
}

int main()
{
    struct node *head1,*head2,*temp;
    
    printf("First Linked List:\n");
    head1=create();
    printf("Secound Linked List:\n");
    head2=create();
    
    if(head1==NULL)
    {
        head1=head2;
    }
    else
    {
        temp=head1;
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        temp->next=head2;
    }
    printf("Joined linked list:\n");
    display(head1);
    return 0;
}
