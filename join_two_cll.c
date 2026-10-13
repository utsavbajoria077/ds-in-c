#include<stdio.h>
#include<stdlib.h>

struct node 
{
    int data;
    struct node *next;
};

struct node *create()
{
    struct node *temp,*newnode,*head=NULL;
    int n,i;
    printf("enter number of nodes:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        newnode=(struct node *)malloc(sizeof(struct node));
        printf("enter data:");
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
    if(head!=NULL)
        {
            temp->next=head;
        }
    return head;
}
void join(struct node *head1,struct node *head2)
{
    struct node *temp1=head1;
    struct node *temp2=head2;

    if(head1==NULL)
    {
        return;
    }
    if(head2==NULL)
    {
        return;
    }
    while(temp1->next!=head1)
        {
            temp1=temp1->next;
        }
    while(temp2->next!=head2)
        {
            temp2=temp2->next;
        }
    temp1->next=head2;
    temp2->next=head1;
}

void display(struct node *head)
{
    if(head==NULL)
    {
        return;
    }
    else
    {
        struct node *temp=head;
        do
        {
            printf("%d->",temp->data);
            temp=temp->next;
        }while(temp!=head);
        printf("HEAD");
    }
}

int main()
{
    struct node *head1,*head2;
    printf("first linked list:\n");
    head1=create();
    printf("second linked list:\n");
    head2=create();
    join(head1,head2);
    display(head1);
}
