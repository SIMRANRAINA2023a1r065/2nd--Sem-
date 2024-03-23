// Write a program to create a dynamic array by using calloc 
#include<stdio.h>
#include<stdlib.h>
int main()
{
//int arr[5];// Static array declaration
int* arr=(int*)calloc(5,sizeof(int));//dynamic array declaration
printf("Enter Array Elements:");
int i;
for(i=0;i<5;i++)
{
scanf("%d",arr+i);
}
printf("Array Elements are:\n");
for(i=0;i<5;i++)
{
printf("%d\t",*(arr+i));}
free(arr);
return 0;
}
