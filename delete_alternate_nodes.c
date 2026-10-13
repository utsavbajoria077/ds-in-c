#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *create()
{
    struct node *head=NULL,*newnode,*temp;
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
    return head;
}
void dele(struct node *head)
{
    struct node *temp=head,*del;
    while(temp!=NULL && temp->next != NULL)
        {
             del=temp->next;
            temp->next=del->next;
            free(del);
            temp=temp->next;
         }  
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
    struct node *head1;
    head1=create();
    dele(head1);
    display(head1);
}
