// Write a program of realloc i.e; to resize the memory stored previously
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
arr=realloc(arr,12* sizeof(int));//reallocation of memory
printf(" Enter Array Elements:");
for(i=i;i<12;i++)
{
scanf("%d",arr+i);
}
printf("Array Elements are:\n");
for(i=0;i<12;i++)
{
printf("%d\t",*(arr+i));
}
return 0;
free(arr);
}