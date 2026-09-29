#include <stdio.h>
#include <stdlib.h>

int main()
{   int choice;
    do{
        printf("\n menu\n");
        printf("1. View balance \n");
        printf("2. make a deposit \n");
        printf("enter your choice\n");
        scanf("%d",&choice);
        if(choice==1)
        {
            printf("you selected view balance\n");
        }
        else if(choice==2)
        {
            printf("you selected make a deposit\n");
        }
        else{
            printf("invalid choice please try again\n");
        }
    }while(choice!=1&&choice!=2);

    return 0;
}
