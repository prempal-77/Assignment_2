//Assume price of 1 USD is INR 82.47 write a program to take the amount in INR and convert it into USD
#include<stdio.h>
int main()
{
          float INR,USD;
          printf("Enter INR :");
          scanf("%f",&INR);
          USD=INR/82.47;
          printf("%.2f INR is equal to %.2f USD dollar",INR, USD);
          return 0;
} 