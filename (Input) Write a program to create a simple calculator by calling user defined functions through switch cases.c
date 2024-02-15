//title of program
//program to create simple calculator using switch case and function for every operation
//header file
#include<stdio.h>
//function taking for addition
double add(double a,double b)
{
//return statement for addition
return a+b;
}
//function taking for subtraction
double sub(double a,double b)
{
//return statement for subtraction
return a-b;
}
//function taking for multiplication
double mul(double a,double b)
{
//return statement for multiplication
return a*b;
}
//function taking for modulo
int mod(int a,int b)
{
//return statement for modulo
return a%b;
}
//function taking for devision 
double div(double a,double b)
{
//if else statement for devision operation
if(b!=0){
//return statement for division
return a/b;
}
else
{
//output statement for division
printf("Error: cannot divide by zero\n");
//return statement for division
return 0;
}
}
//main function heading
int main()
{
//char declaration
char operator;
//initialization of variable for result
double num1,num2,result;
//input statement from user for operator
printf("Enter an operator (+,-,*,/,% %)");
scanf("%c",&operator);
//input statement from user for number1
printf("\n Enter the number1:");
scanf("%lf",&num1);
//input statement from user for number2
printf("\n Enter the number2:");
scanf("%lf",&num2);
//switch case statement
switch(operator)
{
//case statement for addition
case'+':
//result statement for addition
result=add(num1,num2);
//break statement for addition
break;
//case statement for subtraction
case'-':
//result statement for subtraction
result=sub(num1,num2);
//break statement for subtraction
break;
//case statement for multiplication
case'*':
//result statement for multiplication
result=mul(num1,num2);
//break statement for multiplication
break;
//case statement for modulo
case'%':
//result statement for modulo
result=mod((int)num1,(int)num2);
//break statement for modulo
break;
//case statement for division
case'/':
//result statement for addition
result=div(num1,num2);
//break statement for division
break;
//default statement
default:
//output statement for input operator
printf("Error:Invalid input operator\n");
//return statement for input operator
return 1;
}
//output statement for result
printf("Result:%lf\n",result);
//return statement for result
return 0;
}