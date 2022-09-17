#include <stdio.h>
int main()
{
    int cases;
    printf("Enter a number from 1 to 4: \n");
    scanf("%d",&cases);
    switch (cases)
    {
    case 1:
        printf("nice");
        break;
    case 2:
        printf("great");
        break;
    case 3:
        printf("good");
        break;
    case 4:
        printf("not good");
        break;
    default:
        printf("Invalid command");
    }
 return 0;
}