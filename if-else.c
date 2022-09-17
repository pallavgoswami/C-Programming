#include<stdio.h>
int main(){
int n;
printf("Enter any age to know voting eligibility :");
scanf("%d", &n);
if (n>=18)
{
  printf("Voter is eligible");
}
else
{
  printf("Voter is ineligible");
}


}
