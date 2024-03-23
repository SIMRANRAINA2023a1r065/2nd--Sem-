#include<stdio.h>
#include<stdlib.h>
#define size 10 
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
printf("\nEnter value");
scanf("%d",&val);
stack[top]=val;//inserting value in stack from top (always)
printf("Element Added !!!!\n");
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
printf("Element %d remove from the stack\n",val);
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
push();
push();
pop();
show();
return 0;
}
