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
        rem=decimal%16;
        push(rem);
        decimal=decimal/16;
    }
    printf("\nHexadecimal equivalent:");
    while(top!=-1)
    {
        rem=pop();
        if (rem < 10)
            printf("%d", rem);
        else
            printf("%c", rem - 10 + 'A');
        
    }
}
