//Write a program to perform the sum of two numbers using pointer
#include<stdio.h>
int main()
{
int a,b;
int *p1=&a,*p2=&b;
printf("Enter two numbers:");
scanf("%d %d",p1,p2);
printf("a=%d b=%d\n",a,b);//for checking that value is added through address or not
printf("Sum=%d",*p1+*p2);
return 0;
}