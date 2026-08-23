#include<stdio.h>
#define MAX 100

int top=-1;
int stack[MAX];

void push(char x)
{
    top+=1;
    stack[top]=x;
}

char pop()
{
    return stack[top--];
}

int main()
{
    char string[MAX];
    printf("enter a string: ");
    fgets(string, MAX, stdin);
    
        for(int i=0;string[i]!='\0';i++)
        {
           push(string[i]);
        }
    printf("reversed string is: ");
    while(top!=-1)
    {
        printf(" %c",pop());
    }
    return 0;
}
