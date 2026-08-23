#include<stdio.h>
#define MAX 5
int stack[MAX];
int top=-1;

void push(int x)
{
    top++;
    stack[top]=x;
}

int pop()
{
    return stack[top--];
}

int main()
{
    int i,decimal,rem;
    printf("enter a decimal number:");
    scanf("%d",&decimal);
    
    if(decimal==0)
    printf("Binary equivalent:0");
    
    while(decimal>0)
    {
        rem=decimal%2;
        push(rem);
        decimal=decimal/2;
    }
    printf("\nBinary equivalent:");
    while(top!=-1)
    {
        printf("%d",pop());
        
    }
}
