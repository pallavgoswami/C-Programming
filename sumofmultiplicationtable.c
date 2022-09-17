#include<stdio.h>
int main()
{
    int i,n,product,sum;
    printf("Enter a number to print the sum of its table: ");
    scanf("%d",&n);
    for(i=1; i<=10; i++)
    {
        product=i*n;
        sum = sum + product;
    }
    printf("The sum of table is: %d",sum);
    return 0;

}                                                                                                                               