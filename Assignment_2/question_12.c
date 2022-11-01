// ratate three digit number towards one position
#include<stdio.h>
int main()
{
          int x;
          printf("Enter three digit number:");
          scanf("%d",&x);
          x=(x%10)*100+(x/10);
          printf("After rotate = %d ", x );
          return 0;
}