//write a program to find the maximum of three numbers by using nested if
#include<stdio.h>
void main()
{
    int a,b,c;
printf("Enter three numbers:");
scanf("%d%d%d",&a,&b,&c);
if (a>b)
{
    if(a>c)
    {
    printf("The greatest number =%d", a);
    }
    else{
    printf("The greatest number =%d",c);
    }
}
else{
if(b>c)
{
printf("The greatest number is=%d",b);
}
else{
printf("The greatest number is=%d",c);
}
}
}