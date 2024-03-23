// Write a program to find the size of S1 variable created by making our own datatype by using structure
#include<stdio.h>
// for making the single pack of memory at once which is done by CPU, it depends upon capability of CPU
#pragma pack(1)
//declaration of structure i.e; struct(keyword)_Structure name(can be any)
struct student{
int rollnumber;//structure members, type definition and  compiler(OS) allocates 4 bytes of memory for it
char name[32];// " " " " " " " " " " " " " " " " " " " " " " "(same as above) 32 bytes " " " " " " " " "
char branch[12];//" " " " " " " " " " " " " " " " " " " " " " " " " " " " " " 12 bytes" " " " " " " " " " " "
float marks; // " " " " " " " " " " " " " " " " " " " " " " " " " " " "  "  4 bytes" " " " " " " " " " " 
};
int main()
{
struct student s1;//creating 1 variable of student named structure
printf("Size of s1=%d",sizeof(s1));
return 0;
}
