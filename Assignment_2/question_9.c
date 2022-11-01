/*write a program to make the last digit of a number stored in a variable as zero .
(Example - if x=2345 then make it 2340)*/
#include<stdio.h>
int main()
{
          int x;
          printf("Enter four min four digit number: ");
          scanf("%d",&x);
          x=x/10;
          x=x*10;
          printf("%d",x);
          return 0;
}