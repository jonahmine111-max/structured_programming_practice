#include <stdio.h>
#include <stdlib.h>

int main()
{   int number;
    int i;
    int is_prime;
    printf("enter the integer\n");
    scanf("%d",&number);
    if (number<=1)
    {
        is_prime=0;
    }
    else{
        for(i=2; i<=number; i++)
        {
            if(number%2==0)
            {
                is_prime=0;
                break;
            }
        }
    }
    if(is_prime==1)
        printf("\n%d is a prime number",number);
    else
        printf("\n%d is not a prime number",number);
    return 0;
}

