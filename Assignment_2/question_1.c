//write a program to print unit digit of a number.
#include<stdio.h>
int main()
{
    int num;
    printf("Enter a Number:");
    scanf("%d",&num);
    printf("unit digit of %d is %d",num,num%10);
    return 0;
}
