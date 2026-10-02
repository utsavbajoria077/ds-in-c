#include<stdio.h>
#include<stdlib.h>
#define MAX 100
int top=-1;
char stack[MAX];

void push(char ch)
{
	
	if (top==MAX-1)
		printf("...Stack Overflow...");
	else
	{
		top++;
		stack[top]=ch;
	}
}

int pop()
{
	if (top==-1)
		printf("...Stack Underflow...");
	else
	{
	    char ch=stack[top];
	    top--;
	    return ch;
	}
}

int main()
{
	char string[MAX];
	printf("Enter string: ");
    fgets(string, MAX, stdin);
	for(int i=0;string[i]!='\0';i++)
	{
	    push(string[i]);
	}
	printf("reversed string:\n");
	while(top!=-1)
	{
	    printf("%c",pop());
	}
}
	
