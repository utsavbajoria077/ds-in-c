#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node *next;
};

struct node *head=NULL;

void create()
{
	int element;
	printf("enter element:");
	scanf("%d",&element);
	struct node *temp,*ptr;
	temp=(struct node *)malloc(sizeof(struct node));
	temp->data=element;
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

void delete()
{
	if(head==NULL)
	{
		printf("Linked list is empty..");
	}
	else
	{
		struct node *ptr;
		ptr=head;
		printf("deleted element is:%d",ptr->data);
		head=head->next;
		free(ptr);
	}
}

void insert_pos()
{
    int info,pos,i;
    printf("enter new element:");
    scanf("%d",&info);
    printf("enter postion:");
    scanf("%d",&pos);
    struct node *newnode,*ptr;
    newnode=(struct node *)malloc(sizeof(struct node));
    newnode->data=info;
    newnode->next=NULL;
    
    if(pos<1)
    {
        printf("invalid postion..");
        free(newnode);
        return;
    }
    if(pos==1)
    {
        newnode->next=head;
        head=newnode;
        return;
    }
    ptr=head;
    
    for(i=1;i<pos-1 && ptr!=NULL;i++)
    {
        ptr=ptr->next;
    }
    if(ptr==NULL)
    {
        printf("Invalid position");
        free(newnode);
        return;
    }
    newnode->next=ptr->next;
    ptr->next=newnode;
    printf("node inserted succesfully..");
}

void delete_pos()
{
    int pos,i;
    struct node *ptr,*temp;
    printf("enter postion:");
    scanf("%d",&pos);
    if(pos<1)
    {
        printf("invalid postion..");
        return;
    }
    if(pos==1)
    {
        ptr=head;
		printf("deleted element is:%d",ptr->data);
		head=head->next;
		free(ptr);
    }
    ptr=head;
    for(i = 1; i < pos - 1 && ptr != NULL; i++)
    {
        ptr = ptr->next;
    }
    if(ptr==NULL || ptr->next==NULL)
    {
        printf("Invalid position");
        return;
    }
    temp=ptr->next;
    printf("Deleted element is: %d", temp->data);

    ptr->next = temp->next;
    free(temp);
}

void display()
{
   	if(head==NULL)
	{
		printf("\nLinked list is empty..");
	}
	else
	{
	    struct node *ptr;
	    ptr=head;
	    printf("\nLinked list is below:\n");
	    while(ptr!=NULL)
	    {
	        printf("%d->",ptr->data);
	        ptr=ptr->next;
	    }
	    printf("NULL");
	}
}

int main()
{
    int choice;
    while(1)
    {
        printf("\nENTER:\n1.create\n2.delete\n3.insert at pos\n4.delete at pos\n5.display\n6.exit\n");
        printf("enter choice:");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
                create();break;
            case 2:
                delete();break;
            case 3:
                insert_pos();break;
            case 4:
                delete_pos();break;
            case 5:
                display();break;
            case 6:
                printf("exiting program...");
                exit(0);
            default:
                printf("invalid choice...");
        }
    }
    return 0;
}
