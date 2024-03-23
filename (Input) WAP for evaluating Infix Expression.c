#include<stdio.h>
int top1=-1, top2=-1;//top1 is used to maintain the top of operand stack and top 2 is for operator stack
char operator[100];//character array declaration
int operand[100];
void process()
{
int x=operand[top1--];//push fir decrement krna hai
int y=operand[top1--];
char op=operator[top2--];
int z;
switch(op)
{
case '+':
z=x+y;
break;
case '-':
z=y-x;
break;
case'*':
z=x*y;
break;
case '/':
z=y/x;
break;
}
operand[++top1]=z;//adding z value in operand stack
}
int precedence(char op)// function making for precedence given to operator stack
{
switch(op)
{
case'+'://for through (:)
case'-':
return 1;//return--> for coming out from function
case'*':
case '/':
return 2;
default:
return 0;
}
}
int evalInfixExpression(char *str)//here*str is used for printing (getting) values through index
{
int i;
for(i=0;str[i]!='\0';i++){//(loop) it will go until null character only
char ch=str[i];
if(ch>=48 && ch<=57)// condition checking for it is digit or not(0-9), ascii value of 0-9 is 48-57
operand[++top1]=ch-48;//type casting character to integer (logic used)
else if(ch=='+'||ch=='-'||ch=='*'||ch=='/')
{
if(top2==-1)
operator[++top2]=ch;
else{
while(top2!=-1 && precedence(ch)<=precedence(operator[top2]) ){
    process();
}
operator[++top2]=ch;
}
}
else if(ch=='(')
{
operator[++top2]=ch;
}
else if(ch==')')
{
while(operator[top2]!='('){
process();
}
top2--;//push'('
}
}
while(top2!=-1)
{
process();
}
return operand[top1--];//pehle get kro phir decrement kro
}
int main()
{
int result=evalInfixExpression("3+(2*5)/(4-2)");
printf("%d",result);
return 0;
}
