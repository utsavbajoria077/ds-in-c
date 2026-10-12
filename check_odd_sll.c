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
void display(struct node *head)
{
    while(head!=NULL)
    {
        if(head->data%2!=0)
        {
            printf("%d->",head->data);
        }
        head=head->next;
    }
    printf("NULL");
}

int main()
{
    struct node *head1;
    head1=create();
    display(head1);
}
