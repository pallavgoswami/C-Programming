#include<stdio.h>
int main(){
    int a,b,c;
    float percentage;
    printf("Enter marks in three subjects\n");
    scanf("%d%d%d",&a, &b, &c);
    percentage = (float)(a + b + c)/300* 100;
    printf("Marks in percentage are: %f",percentage);
    return 0;
      

}