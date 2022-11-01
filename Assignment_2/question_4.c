// swap two int variables without using third variables
#include<stdio.h>
int main()
{

    int x,y;
    printf("Enter value of x and y:");
    scanf("%d%d",&x,&y);
    printf("After swapn value of x=%d and y=%d \n",x,y);
    x=x+y;
    y=x-y;
    x=x-y;
    printf("After swap value of x and y x=%d , y=%d",x,y);
    return 0;
}

