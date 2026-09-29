#include <stdio.h>
#include <stdlib.h>

int main()
{    float sales, county_tax, state_tax;
    float county_rate=0.02;
    float state_rate=0.04;
    printf("enter total monthly sales\n");
    scanf("%f",&sales);
    if(sales<=0)
    {
        printf("invalid sales amount");
    }
    else {


    county_tax=sales*county_rate;
    state_tax=sales*state_rate;
    printf("\n monthly sales=%.2f",sales);
    printf("\n county tax=%.2f",county_tax);
    printf("\n state tax=%.2f",state_tax);
    if(sales>=100000)
    {
        printf("\nthis is a high sales month.");
    }
    else{
        printf("\nthis is a regular sales month.");
    }}
    return 0;
}
