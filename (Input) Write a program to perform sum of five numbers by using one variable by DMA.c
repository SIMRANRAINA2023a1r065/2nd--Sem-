//Write a program to perform sum of five numbers using one variable by using DMA
#include<stdio.h>
#include<stdlib.h>
int main()
{
int sum=0,i;
for(i=0;i<5;i++)
{
printf("Enter Number:");
int *p1=(int*)malloc(sizeof(int));
scanf("%d",p1);
sum+=*p1;
// to release memory after using it
free(p1);
}
printf("Sum=%d",sum);
return 0;
}