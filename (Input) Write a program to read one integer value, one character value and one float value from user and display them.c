//write a program to read one integer value, one character value and one float value from user and display them
#include<stdio.h>
int main()
{
int x;
printf("Enter number:");
scanf("%d",&x);
fflush(stdin);//for removing buffer
char ch;
printf("Enter Character:");
scanf("%c",&ch);
float y;
printf("Enter float:");
scanf("%f",&y);
printf("x=%d\n",x);
printf("ch=%c\n",ch);
printf("y=%f\n",y);
return 0;
}