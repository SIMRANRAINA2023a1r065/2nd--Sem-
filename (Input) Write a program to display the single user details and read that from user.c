// Write a program to display the single user details and read them from user
#include<stdio.h>
#pragma pack(1)
//Define structure
struct student{
int rollnumber;
char  name[32];
char branch[12];
float marks;
};
int main()
{
//single student data reading
struct student s1;
printf("Enter Roll number:");
scanf("%d",&s1.rollnumber);
printf("Enter Name:");
//for removing buffer
fflush(stdin);
//for string type value the unformatted input function i.e; gets() is used
gets(s1.name);
printf("Enter branch:");
gets(s1.branch);
printf("Enter Marks:");
scanf("%f",&s1.marks);
printf(" Roll number=%d\n",s1.rollnumber);
printf("Name=%s\n",s1.name);
printf("Branch=%s\n",s1.branch);
printf("Marks=%f\n",s1.marks);
return 0;
}