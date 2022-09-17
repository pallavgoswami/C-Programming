#include<stdio.h>
int add(int,int); //function prototype
int main(){
    int m=20,n=30,sum;
    sum=add(m,n);               //function calling
    printf("sum is %d",sum);

}

int add(int a, int b)     //function definition
{
    return (a+b);
}