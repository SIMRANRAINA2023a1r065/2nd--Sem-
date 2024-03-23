//Write a program to check whether the stack is full or not (menu driven program)//top is a pointer here pointing towards index
#include<stdio.h>
#include<stdlib.h>//for exit fnction
#define size 10 //defining macros
int stack[size],top=-1;//global declaration becoz insertion,deletion will be done from top only , if one alue is to be accessed in entire program , then take is as a global variable
int isEmpty()//checking list is empty or not
{
//return 1;
//else
//return 0;
return(top==-1)? 1:0;
}//Like tyre is punctured , petrol is available (or not) in vehicle ->First we check it
int isFull()//checking list is full or not
{
return (top==size-1)?1:0;//1->List is empty, O->list is not empty(checking)
}
void push()//push-> Adding an element to the top of the stack 
{
if(isFull())
printf("Stack Overflow !!!!");
else{
top++;//incrementing to store the values in stack through index
int val;
printf("Enter value:");
scanf("%d",&val);
stack[top]=val;//inserting value in stack from top (always)
printf("Element Added !!!!");
}
}
void show(){//to display the values in stack
if(isEmpty())
printf("Stack is Empty !!!!");
else{
int i;
printf("Stack Elements are:\n");
for(i=top;i>=0;i--)
{
printf("%d\n",stack[i]);
}
}
}
void pop()
{
if(isEmpty()){
    printf("Stack Underflow !!!!");
}
else{
int val=stack[top];
top--;
printf("Element %d remove from the stack",val);
}
}
void peek()
{
if(isEmpty()){
    printf("Stack is empty!!!!");
}
else{
int val=stack[top];
printf("Top Element in stack is %d",stack[top]);
}
}
int main()
{
    while(1)
    {
    printf("1 push\n");//stack is full or not (checking)
    printf("2 pop\n");//stack is empty or not (checking)
    printf("3 peek\n");
    printf("4 show\n");
    printf("5 Exit\n");
    int choice;
        printf("Enter choice");
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
            peek();
                break;
            case 4:
            show();
                break;
            case 5:
            exit(0);
                break;
            default:
                printf("Invalid Choice !!!!!");
                break;
        }
        printf("\n\n");
    }
    return 0;
}

