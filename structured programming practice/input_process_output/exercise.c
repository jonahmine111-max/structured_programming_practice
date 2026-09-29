#include <stdio.h>
#include <stdlib.h>

int main()
{    int num1, num2, num3, sum, product, average;
    printf("enter first number \n");
    scanf("%d",&num1);
    printf("enter second number \n");
    scanf("%d",&num2);
    printf("enter third number \n");
    scanf("%d",&num3);
    sum=num1 +num2 + num3;
    product=num1 *num2* num3;
    average= (num1+num2+num3)/2;
    printf("\nsum=%d",sum);
    printf("\nproduct=%d",product);
    printf("\naverage=%d",average);
    return 0;
}
