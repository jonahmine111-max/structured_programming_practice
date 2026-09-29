#include <stdio.h>
#include <stdlib.h>

int main()
{   int n;
    int i;
    long long factorial=1;
    double e=1.0;
    printf("enter the number of terms\n");
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        factorial=factorial*i;
        e=e+(1.0/factorial);
    }
    printf("estimated value of e=%.5f\n",e);

    return 0;
}
