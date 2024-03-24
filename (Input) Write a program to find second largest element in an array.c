// Write a program to find second largest element in an aaray
#include<stdio.h>
int main()
{
int arr[50],size,i,max1,max2;
printf("Enter the size of an array:");
scanf("%d",&size);
printf("Enter %d elements:\n",size);
for(i=0;i<size;i++)
{
scanf("%d",&arr[i]);
}
max1=arr[0];
max2=arr[0];
for(i=1;i<size;i++)
{
    if(arr[i]>max1)
    {
    max2=max1;
    max1=arr[i];}
    else if(arr[i]>max2 && arr[i]!=max1){
        max2= arr[i];
    }
    }
    printf("The Second largest element in the array is %d\n",max2);
    return 0;
}