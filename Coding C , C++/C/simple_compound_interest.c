#include <stdio.h>

int main(int argc, char const *argv[])
{
    // Simple compound interest calculation problem 
    
    int principal,interest,time,compound_month; // compound interest
    printf("How much amount you dared to take ?");
    scanf("%d",&principal);
    printf("What is the perecentage interest that will be compunded : ");
    scanf("%d" ,&interest);
    printf("The number of the year for completion period of the compound interest : ");
    scanf("%d" ,&time);
    printf("No. of months after which the interest will be compounded : ");
    scanf("%d",&compound_month);

    int increment = 12 / compound_month;

    int amount=principal;

    for(int i = 0; i < time; i++)
    {
       for(int j = 0; j < increment ; j++)
       {
            amount += (amount*(interest/100.0));
       }
       
    }

    printf("The total amount needed to be paid at the end of the period is : %d\n " , amount);
     



    return 0;
}
