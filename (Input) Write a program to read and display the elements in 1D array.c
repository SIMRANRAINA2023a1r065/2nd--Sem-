// Write a program to read and display the elements in 1D array
#include<stdio.h>
int main()
{
int arr[5],i;
printf(" Enter Array Elements: ");
for(i=0;i<5;i++)
{
scanf("%d",&arr[i]);
}
printf("Array Elements are:");
for(i=0;i<5;i++)
{
printf("%d\n",arr[i]);
}
return 0;
}