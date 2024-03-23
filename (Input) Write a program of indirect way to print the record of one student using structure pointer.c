// Write a program of indirect way to print the record of 1 student using structure pointer
#include<stdio.h>
struct student{
int rollnumber;
char name[15];
char branch[12];
float marks;
};
int main()
{
struct student s1, *ptr;
ptr=&s1;
printf("Enter Roll Number:");
scanf("%d",&ptr->rollnumber);//rollnumber is not pointer here ,'&' used here becoz pointer doesn`t have address of the members of structure
printf("Enter Name:");
fflush(stdin);
gets(ptr->name);//'&'is not used here becoz 'name' is a string
printf("Enter branch name:");
gets(ptr->branch);
printf("Enter Marks:");
scanf("%f",&ptr->marks);//'&' used here becoz pointer doesn`t have address of the members of structure
printf("Roll Number:%d\n",ptr->rollnumber);
printf("Name:%s\n",ptr->name);
printf("Branch:%s\n",ptr->branch);
printf("Marks:%f",ptr->marks);
return 0;
}