#include<stdio.h>
#include<stdlib.h>

struct node 
{
    int data;
    struct node *next;
};

struct node *create()
{
    int n,i;
    struct node *temp,*newnode,*head=NULL;
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
    struct node *temp=head;
    while(temp!=NULL)
    {
        printf("%d->",temp->data);
        temp=temp->next;
    }
    printf("NULL");
}
struct node *palindome(struct node *head)
{
    struct node *temp=head;
    int flag=1;
    int i=0,j;
    int arr[100];
    while(temp!=NULL && i<100)
    {
        arr[i]=temp->data;
        i++;
        temp=temp->next;
    }
    printf("Reverse: ");
    for(j = i-1; j >= 0; j--)
    {
        printf("%d->", arr[j]);
    }
    printf("NULL\n");

    j=i-1;
    for(i=0;i<j;i++,j--)
    {
        if(arr[i]!=arr[j])
        {
            flag=0;
            break;
        }
    }

    if(flag == 1)
        printf("Palindrome");
    else
        printf("Not a Palindrome");

    return head;
}

int main()
{
    struct node *head;
    head=create();
    palindome(head);
    display(head);
}
