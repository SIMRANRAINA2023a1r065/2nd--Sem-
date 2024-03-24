// Write a program to display the sum of all array elements
#include<stdio.h>
int main()
{
int arr[5],i,sum=0;
printf("Enter array elements:");
for(i=0;i<5;i++)
{
scanf("%d",&arr[i]);
    sum=sum+arr[i];}
    printf("Sum=%d",sum);
return 0;
}
