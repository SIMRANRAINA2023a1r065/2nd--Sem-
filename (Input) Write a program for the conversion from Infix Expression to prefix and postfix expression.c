// conversion from Infix Expression to postfix Expression and Prefix Expression
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int Precedence(char op)// function making for precedence given to operator stack
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
char* convertInfixToPostfix(char *str){
    int i,x=0,top=-1;
    char operator[50];
    char*s=(char*)malloc(strlen(str)+1);
    for(i=0;str[i]!='\0';i++){
        if((str[i]>=48 && str[i]<=57)||(str[i]>=65 && str[i]<=90)||(str[i]>=97 && str[i]<=122))// or write ch in str[i]
        s[x++]=str[i];
       else if(str[i]=='+'||str[i]=='-'||str[i]=='*'||str[i]=='/'){
            if(top==-1)
            operator[++top]=str[i];
            else{
                while(top!=-1 && Precedence(str[i])<=Precedence(operator[top]))
                s[x++]=operator[top--];
                operator[++top]=str[i];
                                        }
                                                                    }
        else if(str[i]=='(')
operator[++top]=str[i];
else if(str[i]==')'){
    while(operator[top]!='('){
    s[x++]=operator[top--];
                    }
top--;
                                }
                }
while(top!=-1){
    s[x++]=operator[top--];
}
s[x]='\0';
    return s;
}
char* convertInfixToPrefix(char *str){
    int i,x=0,top=-1;
    char operator[50];
    char*s=(char*)malloc(strlen(str)+1);
    for(i=strlen(str)-1;i>=0;i--){
        if((str[i]>=48 && str[i]<=57)||(str[i]>=65 && str[i]<=90)||(str[i]>=97 && str[i]<=122))// or write ch in str[i]
        s[x++]=str[i];
       else if(str[i]=='+'||str[i]=='-'||str[i]=='*'||str[i]=='/'){
            if(top==-1)
            operator[++top]=str[i];
            else{
                while(top!=-1 && Precedence(str[i])<=Precedence(operator[top]))
                s[x++]=operator[top--];
                operator[++top]=str[i];
                                        }
                                                                    }
        else if(str[i]==')')
operator[++top]=str[i];
else if(str[i]=='('){
    while(operator[top]!=')'){
    s[x++]=operator[top--];
                    }
top--;
                                }
                }
while(top!=-1){
    s[x++]=operator[top--];
}
s[x]='\0';
    return strrev(s);// retur the fun of given string
}
int main()
{
    char str[100];
    printf("Enter Infix Expression:");
    gets(str);
    printf("Infix to postfix %s is %s\n",str,convertInfixToPostfix(str));
    printf("Infix to prefix %s is %s\n",str,convertInfixToPrefix(str));
    return 0;
}








