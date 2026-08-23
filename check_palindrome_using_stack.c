#include<stdio.h>
#define MAX 100

int top=-1;
char stack[MAX];

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
    int flag=1;
    printf("enter a string: ");
    fgets(string, MAX, stdin);
    
        for(int i=0; string[i]!='\0'; i++)
{
    if(string[i] != '\n')
    push(string[i]);
}
    for(int i = 0; string[i] != '\0'; i++)
    {
        if(string[i] == '\n')
            continue;

        if(pop() != string[i])
        {
            flag = 0;
            break;
        }
    }
if(flag==1)
printf("palindrome");
else
printf("not palindrome");
    return 0;
}
