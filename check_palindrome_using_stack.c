#include<stdio.h>
#include<stdlib.h>
#define MAX 100
int top=-1;
char stack[MAX];

void push(char ch)
{
	top++;
	stack[top]=ch;
}

int pop()
{
    char ch=stack[top];
    top--;
	return ch;
}

int main()
{
	char string[MAX];
	printf("Enter string: ");
    scanf("%s",string);
	for(int i=0;string[i]!='\0';i++)
	{
	    push(string[i]);
	}
	int flag = 0;

    for (int i = 0; string[i] != '\0'; i++)
    {
        if (string[i] != pop())
        {
            flag = 1;
            break;
        }
    }

    if (flag == 0)
        printf("Palindrome");
    else
        printf("Not Palindrome");
}
	
