// Write a program for accessing the members of structure
#include<stdio.h>
#pragma pack(1)
struct student {
int rollnumber;
char name[32];
char branch[12];
float marks;
};
int main()
{
// initialization in structure
struct student s1={65,"Simran","CSE",780.23};
printf("Roll number=%d\n",s1.rollnumber);
printf("Name=%s\n",s1.name);
printf("Branch =%s\n",s1.branch);
printf("Marks=%f\n",s1.marks);
return 0;
}