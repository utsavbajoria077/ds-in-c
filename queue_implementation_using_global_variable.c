#include<stdio.h>
#include<stdlib.h>
#define MAX 5


int front=-1,rear=-1;
int queue[MAX];

void display();
void dequeue();
void enqueue();

int main()
{
	int choice;
	printf("enter \n1:enqueue\n2:dequeue\n3:display\n4:exit\n");
	while(1)
	{
	    printf("\nenter choice:");
	    scanf("%d",&choice);
		switch(choice)
		{
		case 1:
			enqueue();
			break;
		case 2:
			dequeue();
			break;
		case 3:
			display();
			break;
		case 4:
			exit(1);
			break;
		default:printf("wrong choice...");
		}
	}
	
	return 0;
}

void enqueue()
{
if(rear==MAX-1){
    printf("queue overflow...");
}
else
{
int element;
if(front==-1) front=0;
rear=rear+1;
printf("enter element to enqueue:");
scanf("%d",&element);
queue[rear]=element;
}
}

void dequeue()
{
    if(rear==-1||front>rear)
    {
        printf("queue underflow...");
    }
    else
    {
        printf("dequeued element is:%d",queue[front]);
        front+=1;
    }
}

void display()
{
    if(rear==-1||front>rear)
    {
        printf("queue is empty...");
    }
    else
    {
        int i;
        for(i=front;i<=rear;i++)
        {
            printf("%d ",queue[i]);
        }
    }
}
