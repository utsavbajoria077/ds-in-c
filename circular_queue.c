#include<stdio.h>
#include<stdlib.h>
#define MAX 100

int rear=-1,front=-1;
int queue[MAX];

int enqueue()
{
	if((rear+1)%MAX==front)
		printf("Queue overflow...");
	else
	{
		if(front==-1) front=0;
		int element;
		printf("enter element:");
		scanf("%d",&element);
		rear=(rear+1)%MAX;
		queue[rear]=element;
	}
}
int dequeue()
{
	if(rear==-1)
	{
		printf("Queue underflow...");
	}
	else
	{
		printf("Popped element is: %d", queue[front]);
		if (front == rear)
		{
			front = -1;
			rear = -1;
		}
		else
		{
			front = (front + 1) % MAX;
		}
	}
}
int display()
{
	if(rear==-1)
	{
		printf("Queue underflow...");
	}
	else
	{
		int i = front;

		while(1)
		{
			printf("%d ", queue[i]);

			if(i == rear)
				break;

			i = (i + 1) % MAX;
		}
	}
}
int main()
{
	int choice;
	while(1)
	{
		printf("\n1.enqueue\n2.dequeue\n3.DISPLAY\n4.EXIT\n");
		printf("enter choice:");
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
			printf("Exiting...");
			exit(0);
		default:
			printf("invalid choice...");
		}
	}
}
