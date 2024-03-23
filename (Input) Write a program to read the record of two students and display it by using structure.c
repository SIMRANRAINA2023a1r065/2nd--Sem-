// Write a program to read the record of two students and display it by using structure
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
//Two students data reading
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
struct student s2;
printf("Enter Roll number:");
scanf("%d",&s1.rollnumber);
printf("Enter Name:");
//for removing buffer
fflush(stdin);
//for string type value the unformatted input function i.e; gets() is used
gets(s2.name);
printf("Enter branch:");
gets(s2.branch);
printf("Enter Marks:");
scanf("%f",&s2.marks);
printf(" Roll number=%d\n",s2.rollnumber);
printf("Name=%s\n",s2.name);
printf("Branch=%s\n",s2.branch);
printf("Marks=%f\n",s2.marks);
return 0;
}