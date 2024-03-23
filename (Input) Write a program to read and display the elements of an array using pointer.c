// Write a program to read and display the elements of an array using pointer
#include<stdio.h>
int main()
{
int i,arr[5];
printf("Enter Data:");
for(i=0;i<5;i++)
{
scanf("%d",arr+i);
}
printf("Array elements are:\n");
for(i=0;i<5;i++)
{
printf("%d\t",*(arr+i));
}
return 0;
}