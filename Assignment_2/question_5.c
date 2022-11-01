//write a program to input a three number and display the sum of the digit
#include<stdio.h>
int main()
{
      int x=659,sum=0;
      sum=x%10;
      x=x/10;
      sum=(x%10)+sum;
      x=x/10;
      sum=x+sum;
      printf("sum=%d",sum);
      return 0;
} 
