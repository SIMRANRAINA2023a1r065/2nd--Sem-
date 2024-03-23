#include<stdio.h>
#include<stdlib.h>
#define size 10
int stack1[size],top1=-1;
int stack2[size],top2=-1;
void push1(){
if(top1==size-1)
printf("stack-1 overflow!!!");
else
{
top1++;
int val;
printf("enter value:");
scanf("%d",&val);
stack1[top1]=val;//top1 is used to maintain top 1 data to stack 1
printf("element added!!!\n");
}
}   
 void push2(){
if(top2==size-1)
printf("stack-2 overflow!!!");
else
{
top2++;
int val;
printf("enter value:");
scanf("%d",&val);
stack2[top2]=val;//top1 is used to maintain top 2 data to stack 2
printf("element added!!!\n");
}
}                        
void show1(){//to display the stack elements
    if(top1==-1)
    printf("stack-1 is empty!!!");
    else{
    int i;
    printf("stack-1 elements are:\n");
    for(i=top1;i>=0;i--){
    printf("%d\n",stack1[i]);
    }
    }
}
void show2(){//to display the stack elements
    if(top2==-1)
    printf("stack-2 is empty!!!");
    else{
    int i;
    printf("stack-2 elements are:\n");
    for(i=top2;i>=0;i--){
    printf("%d\n",stack2[i]);
    }
    }
}
void pop1(){
if(top1==-1){
printf("stack-1 underflow!!!");
}
else{
int val=stack1[top1];
top1--;
printf("element %d remove from the stack-1\n",val);
}
}
void pop2(){
if(top2==-1){
printf("stack-2 underflow!!!");
}
else{
int val=stack2[top2];
top2--;
printf("element %d remove from the stack-2\n",val);
}
}
void peek1(){
if(top1==-1){
printf("stack-1 is empty!!!");
}
else{
//int val=stack[top];
printf("top element in stack-1 is %d \n",stack1[top1]);

}
}
void peek2(){
if(top2==-1){
printf("stack-2 is empty!!!");
}
else{
//int val=stack[top];
printf("top element in stack-2 is %d \n",stack2[top2]);

}
}
int main(){
 push1();
 push1();
 push2();
 push2();
 pop1();
 pop2();
 peek1();
 peek2();
 show1();
 show2();
 exit(0);
 return 0;
}