//Write a program to create a simple queue
#include<stdio.h>
#include<stdlib.h>
#define max 100
int queue[max], front=-1,rear=-1;
int isFull(){
    return rear==max-1;
}
int isEmpty(){
    return front==-1;
}
void enqueue(int value)
{
if(isFull())
{
printf("Queue Overflow !!!!");
}
else{
queue[++rear]=value;//add the 'value' to the next available position in the queue.
if(front==-1)//if the queue was previously empty,
front=rear;//set both 'front'and 'rear' to the position pf the newly added element
printf("%d added in queue !!!!", value) ;
 }
}
void dequeue(){
    if(isEmpty()|| front>rear){//empty or underflow condition
    printf("Queue underflow !!!!");
    }
    else{
    int value=queue[front++];//Retrieve the value of the element at the front of the queue
    if(front>rear)
    front=rear=-1; // Reset both 'front' and 'rear' pointers to indicate an empty queue
    printf("%d removed from the queue !!!!",value);
    }
}
int peek(){
    if(isEmpty()|| front>rear)
    return -1;//error condition
    else
    return queue[front];
}
void display()
{
    int i;
    if(isEmpty())
    printf("Queue is empty !!");
    else{
    for(i=front;i<=rear;i++)
    printf("%d\t",queue[i]);
    }
}
int main()
{
  int choice,val;
  while(1){
//system("cls");
printf("1. Enqueue\n");
printf("2. Dequeue\n");
printf("3. peek\n");
printf("4. Display\n");
printf("5. Exit\n");
printf("\n Enter choice:");
scanf("%d",&choice);
switch(choice){
case 1:
printf("Enter value:");
scanf("%d",&val);
enqueue(val);
break;
case 2:
dequeue();
 break;
 case 3:
 val=peek();
 if(val==-1)
 printf("Queue is empty !!!!");
 else
 printf("%d is available in front of queue !!!!",val);
 break;
 case 4:
 display();
 break;
 case 5:
 exit(0);
 break;
 default:
 printf("Invalid choice !!!!");
}
printf("\n");
system("pause");
  }
  return 0;
}
