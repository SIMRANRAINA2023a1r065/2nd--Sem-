//Write a program to perform the swapping of two numbers using pointer
#include<stdio.h>
int main()
{
int a,b;
int *p1=&a,*p2=&b;
printf("Enter two numbers:");
scanf("%d %d",p1,p2);
printf("Before Swapping a=%d and b=%d",a,b);//*p1=a,*p2=*b;
int z=*p1;
*p1=*p2;
*p2=z;
printf("After Swapping a=%d and b=%d",a,b);//*p1=a,*p2=*b;
return 0;
}