#include <stdio.h>
#include <stdlib.h>

int main()
{    int number;
     int sum=0;
     int count=0;
     float average;
    printf("enter an integer (-1 to stop)\n");
    scanf("%d",&number);
    while(number != -1)
    {
        sum=sum+number;
        count=count+1 ;
        printf("enter an integer (-1 to stop):");
        scanf("%d",&number);
    }
    if(count>0)
    {
        average=(float)sum/count;
        printf("\n total=%d\n",sum);
        printf("count=%d\n",count);
        printf("average=%.2f\n",average);
    }
    else{
        printf("\n no numbers were entered");
    }

    return 0;
}
