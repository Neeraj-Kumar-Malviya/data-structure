/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdbool.h>
#define n 5
int stack[n];
int top=-1;
int main()
{
int push();
int pop();
void display();
int choice;

while(true)
{
    printf("enter your choice\n");
        printf("1.push\n");
    printf("2.pop\n");
    printf("3.display\n");
        printf("4.peek\n");

   // printf("enter your choice");

    scanf("%d",&choice);
    
    switch(choice)
    {
        case 1:
        push();
        break;
        case 2:
        pop();
        break;
        case 3:
        display();
        break;
        case 4:
        peek();
        break;
        default:
        printf("invalid choice\n");
    }
}
    return 0;
}

int push()
{
    int data;
    printf("enter data which you want to insert\n");
    scanf("%d",&data);
    if(top==n-1)
    {
        printf("stack overflow\n");
    }
    else
    {
        top++;
        stack[top]=data;
        return top;
    }
}
int pop()
{
    if(top==-1)
    {
        printf("stack underflow \n");
    }
    else
    {
       top--;
    return top; 
    }
    
}
void peek()
{
    if(top==-1)
    {
        printf("empty stack\n");
    }
    else
    {
           printf("%d\n",stack[top]);
 
    }
}

void display()
{          
    if(top==-1)
    {
                printf("empty stack\n");

    }
    else
    {
         printf("stack elements are:");

    for(int i=top;top>=0;top--)
    {
        printf("\n%d",stack[top]);
    }
    }
   
    printf("\n");
}












