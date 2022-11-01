//write a program to swap two int variables
#include<stdio.h>
int main()
{
    int x,y,temp;
    printf("Enter  value of x and b:");
    scanf("%d%d",&x,&y);
    printf("Before swaping value of n x=%d , y=%d \n",x,y);
    temp=y;
    y=x;
    x=temp;
    printf("After swaping Value of x=%d , and y= %d",x,y);
    return 0;
}
