//write a program to find even or odd by calling the user defined function through if statements
#include <stdio.h>
int isEven(int num)
{
    return !(num & 1);
}


int main()
{
    int num;
    printf("Enter any number: ");
    scanf("%d", &num);
    
    if(isEven(num))
    {
        printf("The number is even.");
    }
    else
    {
        printf("The number is odd.");
    }
    
    return 0;
}