//write a program to perform sum of two numbers by using malloc()
#include<stdio.h>
#include<stdlib.h>
int main()
{
int *p1=(int*)malloc(sizeof(int));// type casting to integer data type
printf("Enter first Number:");
scanf("%d",p1);
int *p2=(int*)malloc(sizeof(int));
printf("Enter second Number:");
scanf("%d",p2);
printf("Sum=%d",*p1+*p2);
return 0;
}