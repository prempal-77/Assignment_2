
// write a program to check whether the given number is even or odd using a bitwise operator
#include<stdio.h>
int main()
{
          int num;
          printf("Enter any number :");
          scanf("%d",&num);
          (num & 1)?printf("odd"):printf("even");
          return 0;
}
