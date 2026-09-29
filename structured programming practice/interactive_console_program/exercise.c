#include <stdio.h>
#include <stdlib.h>

int main()
{   float sales;
    float earnings;
    float basePay= 200.00;
    float commission_rate=0.09;
    printf("enter weekly sales:\n");
    scanf("%.2f",&sales);
    while(sales!=-1)
    {
        earnings=basePay+(sales*commission_rate);
        printf("salesperson's earnings=UGX%.2f\n",earnings);
        printf("\n enter weekly sales (-1 to stop):");
        scanf("%f",&sales);

    }
    printf("\n program ended.\n");
    return 0;
}
