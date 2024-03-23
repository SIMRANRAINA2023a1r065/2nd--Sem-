// Write a program to check all the brackets in the given expression is balanced or not.
#include<stdio.h>
#include<string.h>
#define size 10
int main()
{
char str[100],stack[100];//string declaration, character data type here will be used, character array declaration
int top=-1,i,flag=0;
printf("Enter Expression:");
gets(str);
int len=strlen(str);//getting the length of the characters that u are entering here
for(i=0;i<len;i++)
{
if(str[i]=='[' || str[i]=='{'||str[i]=='(')
{
    stack[++top]=str[i];//pre increment mtlb pehle increment hogi uske baad value access hogi
}
else if(str[i]==']' || str[i]=='}'||str[i]==')')
{
if(stack[top]=='[')
stack[top]=']';
else if(stack[top]=='{')
stack[top]='}';
else 
stack[top]=')';
if(stack[top]==str[i]){
top--;
}
else{
flag=1;
break;
}
}
}
if(flag==1||top!=-1)
printf("Expression is unbalanced !!!!");
else
printf("Expression is Balanced !!!!!");
return 0;
}
