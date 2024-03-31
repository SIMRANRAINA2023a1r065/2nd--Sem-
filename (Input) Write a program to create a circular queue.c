//Write a program to create a circular queue
#include<stdio.h>
#include<stdlib.h>
#define MAX_SIZE 5
int queue[MAX_SIZE];
int front=-1,rear=-1;
int isFull(){
    return((rear==MAX_SIZE-1 && front==0)||(rear==front-1));
}
int isEmpty(){
    return(front==-1);
}
void enqueue(int item){
    if(isFull()){
        printf("Queue Overflow\n");
        return;
    }
    else if(front==-1){
        front=rear=0;
    }
    else if(rear==MAX_SIZE-1){
        rear=0;
    }
    else{
        rear++;
    }
    queue[rear]=item;
    printf("%d enqueued to queue\n",item);
}
int dequeue(){
    int item;
    if(isEmpty()){
        printf("Queue Underflow\n");
        exit(1);
    }
    item=queue[front];
    if(front==rear){
        front=rear=-1;
    }
    else if(front==MAX_SIZE-1){
        front=0;
    }
    else{
        front++;
    }
    return item;
}
void display(){
    int i;
    if(isEmpty()){
        printf("Queue is empty\n");
        return;
    }
    printf("Queue elements are:\n");
    if(rear>=front){
        for(i=front;i<=rear;i++)
        printf("%d\n",queue[i]);
    }
    else{
        for(i=front;i<MAX_SIZE;i++)
        printf("%d\n",queue[i]);
        for(i=0;i<=rear;i++)
        printf("%d\n",queue[i]);
    }
    printf("\n");
}
int main(){
    enqueue(25);
    enqueue(46);
    enqueue(78);
    enqueue(90);
    enqueue(107);
    display();
    printf("Dequeued item:%d\n",dequeue());
    printf("Dequeued item:%d\n",dequeue());
    display();
    enqueue(16);
    enqueue(55);
    display();
    return 0;
}


    


