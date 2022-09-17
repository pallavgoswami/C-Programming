#include<stdio.h>
int main()
{
  int i=1,sum=0;
  for (i = 0; i <= 10; i++)
  {
    sum = sum + i;
  }
  printf("Sum of first 10 numbers is : %d",sum);
  return 0;
}
