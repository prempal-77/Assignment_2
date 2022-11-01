//WAP (Example - number =234 and digit =9 then the number is 2349)
#include<stdio.h>
int main()
{
    int num;
    printf("Enter three num of digit: ");
    scanf("%d",&num);
    num=num*10;
    num=num+9; //merge to 9 
    printf("%d",num);
    return 0;    
}